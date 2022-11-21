/**
  * @file    :221121A.cpp
  * @brief   :A. Medium Number
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
    while (tt--)
    {
        vector<int> arr(3);
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end());
        cout<<arr[1]<<endl;
    }
    


    return 0;
}