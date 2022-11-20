/**
  * @file    :221104.cpp
  * @brief   :D. Yet Another Problem
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-11-04
  */
#include<bits/stdc++.h>
using namespace std;
const int MAX=200005;
vector<int> prexor(MAX);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    int sum=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
      sum^=a[i];
      prexor[i+1]=sum;
    }
    
    while(q--){
      int l,r;
      cin>>l>>r;
      if(prexor[r]^prexor[l-1]){
        cout<<-1<<endl;
        continue;
      }
      bool flag=true;
      for(int i=l;i<=r;i++)
      {
        if(a[i-1]){
          flag=false;
          break;
        }
      }
      if(flag){
        cout<<0<<endl;
        continue;
      }
      if((r-l+1)%2){
        cout<<1<<endl;
      }
      else{
        flag=false;
        for(int k=l;k<r;k+=2){
            if (!(prexor[k] ^ prexor[l - 1]))
            {
                flag = true;
                break;
            }
        }
        if(flag){
          cout<<2<<endl;
        }
        else{
          cout<<-1<<endl;
        }
      }

    }
    

    return 0;
}