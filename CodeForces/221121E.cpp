/**
  * @file    :221121E.cpp
  * @brief   :E. Binary Inversions
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-11-21
  */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

    int findmin(vector<int>&t,int m){
        int l=0;
        int r=t.size()-1;
        int tar=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(t[mid]>m){
                r=mid-1;
            }
            else{
                tar=mid;
                l=mid+1;
            }
        }
        return tar;
    }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> p0;
        vector<int> p1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                p0.push_back(i);
            }
            else{
                p1.push_back(i);
            }
        }

        int i,j;
        for(i=0;i<n;i++){
            if(a[i]==0){
                break;
            }
        }
        for(j=0;j<n;j++){
            if(a[n-1-j]==1){
                break;
            }
        }

        if(i==n||j==-1){
            cout<<n-1<<endl;
            continue;
        }
        
        // 0->1
        int c01=p0.size()-i;
        // 1->0
        int c10=p1.size()-j;

        
        if (c01 <= 0 && c10 <= 0) {
        }
        else {
            if (c01 >= c10) {
                auto r = lower_bound(p0.begin(), p0.end(), i);
                p0.erase(r);
                auto it = lower_bound(p1.begin(), p1.end(), i);
                p1.insert(it, i);
            }
            else if (c01 < c10) {
                j = n - 1 - j;
                auto r = lower_bound(p1.begin(), p1.end(), j);
                p1.erase(r);
                auto it = lower_bound(p0.begin(), p0.end(), j);
                p0.insert(it, j);
            }
        }

        ll cnt=0;

        for(auto&m:p0){
            int p=findmin(p1,m);
            if(p!=-1){
                p++;
                cnt+=p;
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}