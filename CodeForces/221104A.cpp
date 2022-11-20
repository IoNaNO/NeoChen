/**
  * @file    :221104A.cpp
  * @brief   :A. Two Groups
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-11-04
  */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        ll sumA=0;
        ll sumB=0;
        for(auto&i:a){
            if(i<0){
                sumA-=i;
            }
            else{
                sumB+=i;
            }
        }
        cout<<abs(sumA-sumB)<<endl;
    }

    return 0;
}