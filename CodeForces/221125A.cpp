/**
  * @file    :221125A.cpp
  * @brief   :A. SSeeeeiinngg DDoouubbllee
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
        string str;
        cin>>str;
        int i=0;
        int j=str.size()-1;
        for(;j>=0;j--){
            str.push_back(str[j]);
        }
        cout<<str<<endl;
    }

    return 0;
}