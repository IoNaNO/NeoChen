/**
  * @file    :221120A.cpp
  * @brief   :A - Two Permutations
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-11-20
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
        int n,a,b;
        cin>>n>>a>>b;
        int t=n-a-b;
        if(n==a&&n==b){
            cout<<"Yes"<<endl;
            continue;
        }
        if(t>=2){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }


    return 0;
}