/**
  * @file    :221023B.cpp
  * @brief   :B. Permutation Value
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-22
  */

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        arr[0]=1;
        arr[n-1]=2;
        for(int i=3;i<=n;i++)
        {
            arr[i-2]=i;
        }
        for(auto&i:arr)
        {
            cout<<i<<' ';
        }
        cout<<endl;
    }

    return 0;
}