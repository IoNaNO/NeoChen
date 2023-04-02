#include<bits/stdc++.h>
using namespace std;


// int mincost(vector<int>& w,vector<int>& cap,vector<int>& z)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;
    vector<int> x(n);
    vector<int> y(n);
    vector<int> z(n);
    // vector<int> premin(n);
    // vector<int> f(n,INT_MAX);
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n;i++){
        cin>>y[i];
    }
    int mmin=INT_MAX;
    // int index=0;
    for(int i=0;i<n;i++){
        cin>>z[i];
        // premin[i]=mmin;
        // if(z[i]<mmin){
        //     mmin=z[i];
        // }
    }

    // f[0]=(x[0]-y[0])*z[0];
    int m;
    cin>>m;
    while(m--){
        int q;
        cin>>q;
        q--;
        // for(int i=1;i<=q;i++){
        //     if(f[i]==INT_MAX){
        //         f[i]=min(f[i-1]+premin[i]*(x[i]-y[i]),z[i]*(x[i]-y[i]));
        //     }
        // }
        // cout<<f[q]<<' ';
        int ans=INT_MAX;
        int vol=0;
        for(int i=q;i>=0;i--){
            vol+=(x[i]-y[i]);
            ans=min(ans,vol*z[i]);
        }
        cout<<ans<<' ';
    }

    return 0;
}