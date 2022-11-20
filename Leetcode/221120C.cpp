/**
  * @file    :221120C.cpp
  * @brief   :6243. 到达首都的最少油耗
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-11-20
  */

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    return 0;
}
typedef long long ll;
class Solution {
private:
    int s;
    vector<ll> fuel;
    vector<int> pnums;
public:
    ll findpath(int a,int b,vector<vector<int>>&adj){
        if(adj[b].size()==1){           
            return 1;
        }
        for(int i=0;i<adj[b].size();i++){
            if(adj[b][i]!=a){
                fuel[b]+=findpath(b,adj[b][i],adj);
                pnums[b]+=pnums[adj[b][i]];
                pnums[adj[b][i]]=0;
            }
        }
        if(pnums[b]%s==0){
            return pnums[b]/s+fuel[b];
        }
        else{
            return pnums[b]/s+1+fuel[b];
        }
    }
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        int n=roads.size()+1;
        s=seats;
        //ll fuel=0;
        vector<vector<int>> adj(n);
        fuel.resize(n,0);
        pnums.resize(n,1);
        for(auto&m:roads){
            adj[m[0]].push_back(m[1]);
            adj[m[1]].push_back(m[0]);
        }
        
        findpath(-1,0,adj);

        return fuel[0];
    }
};