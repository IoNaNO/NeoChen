#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    int left;
    int right;
    int c;
};

void dfs(vector<TreeNode>&T,int pos){
    if(T[pos].left==0){
        T[pos].val=1;
        return;
    }
    dfs(T,T[pos].right);
    dfs(T,T[pos].left);
    if(T[pos].c==1){
        T[pos].val=T[T[pos].left].val+T[T[pos].right].val;
    }
    else{
        T[pos].val=T[T[pos].left].val^T[T[pos].right].val;
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;
    vector<TreeNode> tree(n);
    for(int i=1;i<n;i++){
        int p;
        cin>>p;
        if(tree[p-1].left){
            tree[p-1].right=i;
        }
        else{
            tree[p-1].left=i;
        }
    }
    for(int i=0;i<n;i++){
        cin>>tree[i].c;
    }

    dfs(tree,0);
    cout<<tree[0].val<<endl;

    return 0;
}