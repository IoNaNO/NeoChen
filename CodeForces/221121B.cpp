/**
  * @file    :221121B.cpp
  * @brief   :B. Atilla's Favorite Problem
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
        string str;
        cin>>n>>str;

        sort(str.rbegin(),str.rend());
        cout<<str[0]-'a'+1<<endl;
    }

    return 0;
}