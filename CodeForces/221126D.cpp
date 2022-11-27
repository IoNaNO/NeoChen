/**
  * @file    :221126D.cpp
  * @brief   :D. Doremy's Pegging Game
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-11-26
  */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fabs_with_p(int k,int p){
    ll ans=1;
    while(k){
        ans*=k--;
        ans%=p;
    }
    return ans;
}

ll c_2_with_p(int k,int p){
    ll ans=1;
    ans=k*(k-1)/2;
    return ans%p;
}

ll c_3_with_p(int k,int p){
    ll ans=1;
    ans=k*(k-1)*(k-2)/6;
    return ans%p;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n,p;
    cin>>n>>p;
    ll res=0;
    if(n%2){
        ll a = c_3_with_p(n, p);
        ll b = c_2_with_p(n / 2, p) * (ll)n;
        ll numa=a-b;
        while (numa < 0) {
            numa += p;
        }
        res+=(numa*3*fabs_with_p(n-3,p))%p;

    }
    else{
        int numa=c_3_with_p(n,p)-c_2_with_p(n/2,p)*n;
        res+=numa*3;
        res%=p;
        int numb=n/2*(n-2);
        res+=numb+n;
    }

    cout<<res%p<<endl;

    return 0;
}