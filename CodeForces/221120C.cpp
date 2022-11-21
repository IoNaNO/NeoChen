/**
  * @file    :221120C.cpp
  * @brief   :C. Set Construction
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-11-20
  */
#include<bits/stdc++.h>
using namespace std;

vector<bool> visited;
vector<set<int>> res;
vector<vector<int>> adj;
vector<int> roots;
vector<vector<int>> tool;

void dfs(int b,int n)
{
    for(int i=0;i<n;i++){

        if(adj[b][i]){
            for(auto&j:res[i]){
                res[b].insert(j);
            }
            tool[b].push_back(i);
        }
    }
}

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        
        adj.clear();
        adj.resize(n,vector<int>(n));

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                char x;
                cin>>x;
                adj[i][j]=x-'0';
            }
        }

        for(int i=0;i<n;i++){
            vector<int> a{i+1};
            for(int j=0;j<n;j++){
                if(adj[j][i]){
                    a.push_back(j+1);
                }
            }
            cout<<a.size()<<' ';
            for(auto&m:a){
                cout<<m<<' ';
            }
            cout<<endl;
        }


    }

    return 0;
}