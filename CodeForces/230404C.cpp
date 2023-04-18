#include<bits/stdc++.h>
using namespace std;

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
        vector<int> b(n);
        for(int i=1;i<n;i++){
            cin>>b[i];
        }
        a[0]=b[1];
        for(int i=1;i<n;i++){
            if(a[i-1]==b[i]){
                if(i!=n-1){
                    if(b[i+1]>b[i]){
                        a[i]=b[i];
                    }
                    else{
                        a[i]=b[i+1];
                    }
                }
                else{
                    a[i]=b[i];
                }
            }
            else{
                a[i]=b[i];
            }
        }
        for(auto i:a){
            cout<<i<<' ';
        }
        cout<<endl;
    }

    return 0;
}