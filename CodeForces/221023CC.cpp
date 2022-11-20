/**
  * @file    :2210232C.cpp
  * @brief   :C1. Sheikh (Easy version)
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-26
  */
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll f(vector<ll>&psum,vector<int>& pxor,int l,int r)
{
    return psum[r]-psum[l-1]-(ll)(pxor[r]^pxor[l-1]);
}

void shrink(vector<int>&a,int&i,int&j)
{
    while(i<j){
        if(a[i-1]&&a[j-1]){
            break;
        }
        if(a[i-1]==0){
            i++;
        }
        if(a[j-1]==0){
            j--;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin>>tt;
    while(tt--){
        int n,q;
        cin>>n>>q;
        vector<int> a(n);
        vector<ll> psum(n+1);
        vector<int> pxor(n+1);
        for(int i=0;i<n;i++){
            cin>>a[i];
            psum[i+1]=psum[i]+a[i];
            pxor[i+1]=pxor[i]^a[i];
        }

        while(q--){
            int Li,Ri;
            cin>>Li>>Ri;
            ll maxval=LONG_MIN;
            pair<int,int> ans={Li,Ri};
            int i=Li;
            int j=Ri;
            int minlen=Ri-Li;      
            maxval=f(psum,pxor,i,j);
            
            for(i=Li;i<j;i++)
            {
                int l=i;
                int r=i+minlen;
                if(r>Ri)
                {
                    r=Ri;
                }
                if(maxval!=f(psum,pxor,i,r))
                {
                    continue;
                }
                while(l<r){
                    int mid=(l+r)/2;
                    ll val=f(psum,pxor,i,mid);
                    if(val<maxval){
                        l=mid+1;
                    }
                    else{
                        r=mid;
                    }
                }
                if(minlen>r-i){
                    minlen=r-i;
                    ans={i,r};
                }
                if(minlen==0){
                    break;
                }
            }
            cout<<ans.first<<' '<<ans.second<<endl;
        }
        
    }


    return 0;
}