/**
  * @file    :221121C.cpp
  * @brief   :C. Advantage
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-11-21
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
        vector<int> s(n);
        for(int i=0;i<n;i++){
            cin>>s[i];
        }

        int a=INT32_MIN;
        int b=a;
        for(int i=0;i<n;i++){
            if(s[i]>a){
                b=a;
                a=s[i];
            }
            else if(s[i]>b){
                b=s[i];
            }
        }

        for(int i=0;i<n;i++){
            if(s[i]==a){
                cout<<s[i]-b<<' ';
            }
            else{
                cout<<s[i]-a<<' ';
            }
        }
        cout<<endl;

    }

    return 0;
}