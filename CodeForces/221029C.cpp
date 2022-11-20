/**
  * @file    :221029C.cpp
  * @brief   :C. Bricks and Bags
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-29
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
        sort(a.begin(),a.end());
        int max=0;
        int i=0;
        int j=n-1;
        while(i<j){
            int val=a[j]-a[j-1]+a[j]-a[i];
            if(val>max){
                max=val;
            }
            j--;
        }
        j=n-1;
        while(i<j){
            int val=a[i+1]-a[i]+a[j]-a[i];
            if(val>max){
                max=val;
            }
            i++;
        }
        cout<<max<<endl;
    }


    return 0;
}