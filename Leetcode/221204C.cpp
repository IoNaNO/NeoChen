#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    return 0;
}

class Solution {
private:
    vector<bool> visited;
    // vector<set<int>> ADj;
    vector<vector<int>> adj;
    int ans;
public:
    void dfs(int a,int b,int n){
        if(visited[b]==true){
            return;
        }
        visited[b]=true;
        // for(auto&i:ADj[b]){
        //     if(adj[b][i]<ans){
        //         ans=adj[b][i];
        //     }
        //     if(i!=a){
        //         dfs(b,i);
        //     }
        // }
        for(int i=1;i<=n;i++){
            if(adj[b][i]){
                // if(ans>adj[b][i]){
                //     ans=adj[b][i];
                // }
                dfs(b,i,n);
            }
        }
    }
    int minScore(int n, vector<vector<int>>& roads) {
        adj.resize(n+1,vector<int>(n+1));
        // ADj.resize(n+1);
        for(auto&m:roads){
            adj[m[0]][m[1]]=m[2];
            adj[m[1]][m[0]]=m[2];
            // ADj[m[0]].insert(m[1]);
            // ADj[m[1]].insert(m[0]);
        }
        visited.resize(n+1,false);
        ans=INT32_MAX;
        dfs(0,1,n);
        for(auto&m:roads){
            if(visited[m[0]]){
                if(ans>m[2]){
                    ans=m[2];
                }
            }
        }
        if(ans==INT32_MAX){
            return -1;
        }
        return ans;

    }
};