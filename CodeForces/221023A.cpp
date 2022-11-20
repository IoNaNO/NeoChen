/**
  * @file    :221023A.cpp
  * @brief   :A. Technical Support
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-23
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
        string techs;
        cin>>n>>techs;
        int t=0;
        for(int i=0;i<n;i++){
            if(techs[i]=='Q'){
                t++;
            }
            else{
                t--;
                if(t<0){
                    t=0;
                }
            }
        }
        if(t<=0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    
    return 0;
}