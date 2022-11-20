/**
  * @file    :221029B.cpp
  * @brief   :B. Jumbo Extra Cheese 2
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-29
  */
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int tt;
    cin>>tt;
    while (tt--)
    {
        int n;
        vector<pair<int,int>> chesses;
        cin>>n;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            if(a>b){
                chesses.push_back({a,b});
            }
            else{
                chesses.push_back({b,a});
            }
        }
        ll sumx=0;
        int maxy=0;
        for(int i=0;i<n;i++){
            if(chesses[i].first>maxy){
                maxy=chesses[i].first;
            }
            sumx+=(ll)chesses[i].second;
        }
        ll p=2*(ll)(sumx+(ll)maxy);
        cout<<p<<endl;
    }
    


    return 0;
}