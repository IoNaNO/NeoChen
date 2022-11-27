/**
  * @file    :221125D.cpp
  * @brief   :D. Range = √Sum
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-11-25
  */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        ll range=n/2*3;
        ll tar=0;
        ll avg=0;
        while(true){
            avg=range*range/n;
            tar=range*range-avg*n;
            if((range-tar)%2==0&&(range-tar)>n){
                break;
            }
            else{
                range++;
            }
        }
        vector<int> ans(n);
        int y=(tar+range)/2;
        int x=tar-y;
        int i=0;
        int j=n-1;
        ans[i++]=x;
        ans[j--]=y;
        x++;
        while(i<j){
            ans[i++]=x;
            ans[j--]=-x;
            x++;
        }
        for(int i=0;i<n;i++){
            ans[i]+=avg;
            cout<<ans[i]<<' ';
        }
        cout<<endl;

    }


    return 0;
}