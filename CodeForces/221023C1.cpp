/**
  * @file    :221023C1.cpp
  * @brief   :C1. Make Nonzero Sum (easy version)
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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int len=1;
        int l=1;
        int r;
        vector<pair<int,int>> lr;
        if(n%2){
            cout<<-1<<endl;
            continue;
        }
        else{
            for(int i=0;i<n/2;i++)
            {
                if(arr[2*i]==arr[2*i+1]){
                    lr.push_back({2*i,2*i+1});
                }
                else{
                    lr.push_back({2*i,2*i});
                    lr.push_back({2*i+1,2*i+1});
                }
            }
        }

        cout<<lr.size()<<endl;
        for(auto&m:lr){
            cout<<m.first+1<<' '<<m.second+1<<endl;
        }
    }

    return 0;
}