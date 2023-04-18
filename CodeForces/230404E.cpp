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
        ll k;
        cin>>k;
        ll ans=0;
        ll base=1;
        while(k){
            int d=k%9;
            if(d>=4){
                d++;
            }
            ans+=d*base;
            k/=9;
            base*=10;
        }
        cout<<ans<<endl;
    }

    return 0;
}