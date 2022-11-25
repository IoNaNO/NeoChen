/**
  * @file    :221125B.cpp
  * @brief   :B. XOR = Average
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-11-25
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
        if(n%2){
            while(n--){
                cout<<1<<' ';
            }
        }
        else{
            if(n==2){
                cout<<1<<' '<<3;
            }
            else{
                for(int i=1;i<=n-2;i++){
                    cout<<2<<' ';
                }
                cout<<1<<' '<<3;
            }
        }
        cout<<endl;
    }

    return 0;
}