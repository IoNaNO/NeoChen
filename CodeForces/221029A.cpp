/**
  * @file    :221029A.cpp
  * @brief   :A. Factorise N+M
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-29
  */
#include<bits/stdc++.h>
using namespace std;

bool ifprim(int n)
{
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
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
        if(n%2){
            cout<<3<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }


    return 0;
}