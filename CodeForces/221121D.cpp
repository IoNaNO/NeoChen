/**
  * @file    :221121D.cpp
  * @brief   :D. Challenging Valleys
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
    while(tt--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int cnt=0;
        for(int i=0;i<n;i++){
            if(!i){
                int t=a[i];
                int j=i+1;
                while(j<n){
                    if(a[j]>t){
                        i=j;
                        cnt++;
                        break;
                    }
                    else if(a[j]<t){
                        i=j-1;
                        break;
                    }
                    j++;
                }
                if(j==n){
                    cnt++;
                    break;
                }
            }
            else if(a[i-1]>a[i]){
                int t=a[i];
                int j=i+1;
                while(j<n){
                    if(a[j]>t){
                        i=j;
                        cnt++;
                        break;
                    }
                    else if(a[j]<t){
                        i=j-1;
                        break;
                    }
                    j++;
                }
                if(j==n){
                    cnt++;
                    break;
                }
            }
            
        }
        if(cnt==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}