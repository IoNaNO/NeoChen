#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    const int MAX_FIB=46;
    vector<ll>fib(MAX_FIB,1);
    for(int i=2;i<MAX_FIB;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    int tt;
    cin>>tt;
    while (tt--)
    {
        ll n,x,y;
        cin>>n>>x>>y;

        ll lenx=fib[n];
        ll leny=fib[n+1];
        pair<ll,ll> st={1,1};
        pair<ll,ll> ed={lenx,leny};
        // function<bool(int,ll, ll)> check = [&] (int l,ll ta, ll tb) {
        //     if (l == 1) return true;
        //     ll r = fib[l],c = fib[l + 1];
        //     bool ans = false;
        //     if (tb > r) ans = check(l - 1, c - tb + 1, ta);
        //     else if (tb < c - r + 1) ans |= check(l - 1, c - r - tb + 1, ta);
        //     else return false;
        //     return ans;
        // };
        for(;n!=1;n--){
            if(lenx>leny){
                if(ed.first-x>=leny){
                    lenx-=leny;
                    ed.first-=leny;
                    continue;
                }
                else if(x-st.first>=leny){
                    lenx-=leny;
                    st.first+=leny;

                    continue;
                }

                break;
            }
            else{
                if(ed.second-y>=lenx){
                    leny-=lenx;
                    ed.second-=lenx;

                    continue;
                }
                else if(y-st.second>=lenx){
                    leny-=lenx;
                    st.second+=lenx;

                    continue;
                }

                break;
            }
        }
        if(n==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    

    return 0;
}