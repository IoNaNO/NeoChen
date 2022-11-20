/**
  * @file    :2210232A.cpp
  * @brief   :A. Bestie
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-23
  */

#include<bits/stdc++.h>
using namespace std;

inline int gcd(int x,int y)
{
    if(y){
        return gcd(y,x%y);
    }
    else{
        return x;
    }
}

int Lgcd(vector<int>&a)
{
    int res=a[0];
    for(int i=1;i<a.size();i++){
        res=gcd(res,a[i]);
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int d=Lgcd(arr);
        if(d==1){
            cout<<0<<endl;
            continue;
        }
        int d1=gcd(d,n);
        if(d1==1){
            cout<<1<<endl;
            continue;
        }
        d1=gcd(d,n-1);
        if(d1==1){
            cout<<2<<endl;
            continue;
        }
        cout<<3<<endl;
    }


    return 0;
}