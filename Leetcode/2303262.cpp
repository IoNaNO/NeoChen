#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int n;
    cin>>n;
    ll nn=1;
    int t=n;
    while(t--){
        nn<<=1;
    }
    vector<ll> bintree(nn);
    map<ll,ll> cnt;
    for(ll i=1;i<nn;i++){
        cin>>bintree[i];
        cnt[bintree[i]]=i;
    }
    int q;
    cin>>q;
    while(q--){
        ll x;
        cin>>x;
        if(!cnt[x]){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            ll tar=cnt[x]<<1;
            if(tar>=nn){
                cout<<"LEAF"<<endl;
            }
            else{
                printf("%lld %lld\n",bintree[tar],bintree[tar+1]);
            }
        }
    }


    return 0;
}