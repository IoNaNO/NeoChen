/**
  * @file    :221104B.cpp
  * @brief   :B. BAN BAN
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-11-04
  */
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
        int m=n%2+n/2;
        cout<<m<<endl;
        if(n%2){
            for(int i=0;i<m-1;i++){
                cout<<i*3+1<<' '<<(n-i)*3<<endl;
            }
            int k=n/2+1;
            cout<<3*k-2<<' '<<3*k<<endl;            
        }
        else{
            for(int i=0;i<m;i++){
                cout<<i*3+1<<' '<<(n-i)*3<<endl;
            }
        }
    }

    return 0;
}