/**
  * @file    :221126C.cpp
  * @brief   :C. Doremy's City Construction
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-11-26
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
        int n;
        cin>>n;
        vector<int> a(n);
        map<int,int> cnt;
        for(int i=0;i<n;i++){
            cin>>a[i];
            cnt[a[i]]++;
        }
        ll ans=0;
        int div=0;
        for(auto&m:cnt){
            div+=m.second;
            ll t=(ll)div*(n-div);
            if(t>ans){
                ans=t;
            }
        }
        if(!ans){
            ans=n/2;
        }
        cout<<ans<<endl;
    }

    return 0;
}