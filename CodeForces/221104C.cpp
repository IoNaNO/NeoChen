/**
  * @file    :221104C.cpp
  * @brief   :C. Swap Game
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
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        bool flag=true;
        for(int i=1;i<n;i++){
            if(a[0]>a[i])
            {
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }

    return 0;
}