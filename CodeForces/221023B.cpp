/**
  * @file    :221023B.cpp
  * @brief   :B. Kevin and Permutation
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
        cin>>n;
        vector<int> arr(n);
        if(n%2)
        {
            int t=n/2+1;
            int i=0;
            for(i=0;i<t;i++){
                arr[2*i]=i+1;
            }
            for(int j=0;j<n-t;i++){
                arr[2*j+1]=i+1;
                j++;
            }
            
        }
        else{
            int i=1;
            for(int j=0;j<n/2;j++){
                arr[2*j+1]=i++;
            }
            for(int j=0;j<n/2;j++){
                arr[2*j]=i++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<' ';
        }
        cout<<endl;
    }

    return 0;
}