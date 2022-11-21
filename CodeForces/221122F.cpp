/**
  * @file    :221122F.cpp
  * @brief   :F. Quests
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-11-22
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
    while(tt--){
        ll n,c,d;
        cin>>n>>c>>d;
        vector<ll> a(n);


        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }

        sort(a.rbegin(),a.rend());

        if(sum>=c){
            cout<<"Infinity"<<endl;
            continue;
        }

        if(a[0]*d<c){
            cout<<"Impossible"<<endl;
            continue;
        }

        int term=d/a.size();


    }

    return 0;
}