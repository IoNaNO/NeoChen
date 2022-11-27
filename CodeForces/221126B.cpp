/**
  * @file    :221126B.cpp
  * @brief   :B. Doremy's Perfect Math Class
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-11-26
  */
#include<bits/stdc++.h>
using namespace std;

int gcd(int m,int n){
    if(m==0){
        return n;
    }
    if(m%n){
        return gcd(n,m%n);
    }
    else{
        return n;
    }
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
        vector<int> a(n);
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int g=0;
        int max=0;
        for(int i=0;i<n;i++){
            g=gcd(g,a[i]);
            if(a[i]>max){
                max=a[i];
            }
        }
        cout<<max/g<<endl;


    }

    return 0;
}