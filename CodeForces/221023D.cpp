/**
  * @file    :221023D.cpp
  * @brief   :D. Factorial Divisibility
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-23
  */
#include<bits/stdc++.h>
using namespace std;
const int MAXLEN=500001;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    vector<int> cnt(MAXLEN,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cnt[arr[i]]++;
    }

    for(int i=2;i<=x;i++){
      if(cnt[i-1]%i){
        cout<<"No"<<endl;
        return 0;
      }
      else{
        cnt[i]+=cnt[i-1]/i;
      }
    }
    cout<<"Yes"<<endl;
    
    return 0;
}