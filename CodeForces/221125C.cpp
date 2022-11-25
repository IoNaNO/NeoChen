/**
  * @file    :221125C.cpp
  * @brief   :C. Almost All Multiples
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-11-25
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
        int n,x;
        cin>>n>>x;
        vector<int> ans(n);
        
        for(int i=0;i<n;i++){
            ans[i]=(i+1);
        }

        vector<int> factors;
        for(int i=2;i<=n;i++){
            if(n%i==0){
                factors.push_back(i);
            }
        }

        int a=x;
        int b=0;
        for(int i=0;i<factors.size();i++){
            if(factors[i]%a==0){
                a=factors[i];
                if(b){
                    ans[b-1]=a;
                }
                b=a;
            }
        }
        if(b==0){
            cout<<-1<<endl;
            continue;
        }
        ans[a-1]=n;
        ans[0]=x;
        ans[n-1]=1;
        for(auto&i:ans){
            cout<<i<<' ';
        }
        cout<<endl;
        

    }

    return 0;
}