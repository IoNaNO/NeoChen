#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n,m,s;
    cin>>n>>m>>s;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<int> f(n+1,INT_MAX);
    f[0]=0;
    for(int i=1;i<=n;i++){
        int u=INT_MIN;
        int v=INT_MAX;
        int cost=0;
        for(int j=i;j>=1&&i-j+1<=m;--j){
            v=min(v,a[j-1]);
            u=max(u,a[j-1]);
            cost=(i-j+1)*((u+v)/2)+s;
            f[i]=min(f[i],f[j-1]+cost);
        }
    }
    cout<<f[n]<<endl;

    return 0;
}