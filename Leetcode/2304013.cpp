#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n,m;
    cin>>n>>m;
    vector<int> a(n+1);
    vector<int> op(m);
    vector<int> x(m);
    vector<int> y(m);

    for(int i=0;i<m;i++){
        cin>>op[i];
    }
    for(int i=0;i<m;i++){
        cin>>x[i];
    }
    for(int i=0;i<m;i++){
        cin>>y[i];
    }

    for(int i=0;i<m;i++){
        int opa=op[i];
        if(opa==0){
            a[x[i]]=y[i];
        }
        else if(opa==1){
            int sum=0;
            for(int st=x[i];st<=y[i];st++){
                sum+=a[st];
            }
            cout<<sum<<' ';
        }
    }

    return 0;
}