#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int parent;
    vector<int> children;
    char color;
    int cntR,cntG,cntB;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;
    vector<TreeNode> Tree(n+1);
    for(int i=2;i<=n;i++){
        int t;
        cin>>t;
        Tree[t].children.push_back(i);
        Tree[i].parent=t;
    }
    string colors;
    cin>>colors;
    map<char,int> cnt0;
    for(int i=1;i<=n;i++){
        Tree[i].color=colors[i-1];
        cnt0[colors[i-1]]++;
    }
    map<char,int> cnt;
    function<void(int)> dfs=[&](int node){
        if(Tree[node].color=='R'){
            Tree[node].cntR++;
        }
        else if(Tree[node].color=='G'){
            Tree[node].cntG++;
        }
        else{
            Tree[node].cntB++;
        }
        // cnt[Tree[node].color]++;
        for(auto&i:Tree[node].children){
            dfs(i);
            Tree[node].cntB+=Tree[i].cntB;
            Tree[node].cntG+=Tree[i].cntG;
            Tree[node].cntR+=Tree[i].cntR;
        }
    };
    int ans=0;
    dfs(1);
    for(int i=2;i<=n;i++){
        TreeNode now=Tree[i];
        if(now.cntB&&now.cntG&&now.cntR){
            if(now.cntB<Tree[1].cntB&&now.cntG<Tree[1].cntG&&now.cntR<Tree[1].cntR){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}