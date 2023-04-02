#include<bits/stdc++.h>
using namespace std;

vector<set<int>> cR;
vector<set<int>> cB;

bool findInset(int tar,vector<set<int>>&S){
    bool res;
    for(auto&i:S){
        
    }
}

int count(vector<vector<int>> T,int root,string color){
    for(int i=0;i<T[root].size();i++){
        if(T[root][i]){
            if(color[root]==color[i]){
                if(color[i]=='R'){
                    bool isfind=false;
                    for(auto&j:cR){
                        if(j.find(i)!=j.end()){
                            isfind=true;
                            break;
                        }
                    }
                    if(isfind==false){
                        set<int> ns;
                        ns.insert()
                    }
                }
            }
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;
    vector<vector<int>> adj(n,vector<int>(n));
    vector<pair<int,int>> edges;
    string s;
    cin>>s;
    
    for(int i=1;i<n;i++){
        int a,b;
        cin>>a>>b;
        adj[a-1][b-1]=1;    
        adj[b-1][a-1]=1;
        edges.push_back(make_pair(a-1,b-1));
    }

    for(auto&i:edges){
        adj[i.first][i.second]=0;
        adj[i.second][i.first]=0;

    }





    return 0;
}