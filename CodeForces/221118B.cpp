/**
  * @file    :221118B.cpp
  * @brief   :B. Lost Permutation
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-11-18
  */
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    map<int,int> sums;
    int sum=0;
    for(int i=1;i<1000;i++){
        sum+=i;
        sums[sum]=i;
    }

    int tt;
    cin>>tt;
    while(tt--){
        int m,s;
        cin>>m>>s;
        vector<int> b(m);
        int bsum=0;
        int maxb=-1;
        for(int i=0;i<m;i++){
            cin>>b[i];
            bsum+=b[i];
            if(b[i]>maxb){
                maxb=b[i];
            }
        }

        bsum+=s;
        int i=sums[bsum];
        if(i==0){
            cout<<"NO"<<endl;
        }
        else{
            
            if(i<maxb){
                cout<<"NO"<<endl;
                continue;
            }


            cout<<"YES"<<endl;
        }

    }

    return 0;
}