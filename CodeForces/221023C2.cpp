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
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%2){
            cout<<-1<<endl;
            continue;
        }
        int index=1;
        vector<pair<int,int>> lr;
        vector<bool> sta(n,false);
        if(sum<0){
            while(sum<0){
                for(int i=index;i<n;i++){
                    if(!sta[i-1]&&!sta[i]&&arr[i]==-1){
                        sta[i-1]=true;
                        sta[i]=true;
                        lr.push_back({i,i+1});
                        index=i+1;
                        break;
                    }
                }
                sum+=2;
            }
        }
        else{
            while(sum>0){
                for(int i=index;i<n;i++){
                    if(!sta[i-1]&&!sta[i]&&arr[i]==1){
                        sta[i-1]=true;
                        sta[i]=true;
                        lr.push_back({i,i+1});
                        index=i+1;
                        break;
                    }
                }
                sum-=2;
            }
        }
        for(int i=0;i<n;i++){
            if(!sta[i]){
                lr.push_back({i+1,i+1});
            }
        }
        sort(lr.begin(),lr.end());
        cout<<lr.size()<<endl;
        for(auto&m:lr){
            cout<<m.first<<' '<<m.second<<endl;
        }
    }

    return 0;
}