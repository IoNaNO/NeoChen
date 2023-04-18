#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int parent;
    vector<int> children;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;
    vector<TreeNode> Tree(n+1);
    Tree[1].parent=-1;
    for(int i=2;i<=n;i++){
        int t;
        cin>>t;
        Tree[t].children.push_back(i);
        Tree[i].parent=t;
    }
    int x,y;
    cin>>x>>y;
    int cnt1=0;
    int cnt2=0;
    function<void(int)> trace=[&](int node){
        cnt1++;
        if(Tree[node].parent!=-1){
            trace(Tree[node].parent);
        }
    };
    function<int(int)> dfs=[&](int node){
        cnt2++;
        int max_depth=0;
        for(auto&i:Tree[node].children){
            max_depth=max(max_depth,dfs(i));
            cnt2--;
        }
        return max(max_depth,cnt2);
    };
    int ans=0;
    if(Tree[x].parent==y){
        trace(y);
        ans+=cnt1;
        ans+=dfs(x);
    }
    else{
        trace(x);
        ans+=cnt1;
        ans+=dfs(y);
    }
    cout<<ans<<endl;
    return 0;
}