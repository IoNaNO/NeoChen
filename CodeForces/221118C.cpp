/**
  * @file    :221118C.cpp
  * @brief   :C. Thermostat
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-11-18
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
        int l,r,x;
        cin>>l>>r>>x;
        int a,b;
        cin>>a>>b;

        if(a==b){
            cout<<0<<endl;
            continue;
        }

        int da1=a-l;
        int da2=r-a;
        int db1=b-l;
        int db2=r-b;

        if(abs(da1-db1)>=x){
            cout<<1<<endl;
        }
        else{
            if(da1<x&&da2<x){
                cout<<-1<<endl;
                continue;
            }
            if(db1<x&&db2<x){
                cout<<-1<<endl;
                continue;
            }
            if(da1>=x&&da2>=x){
                cout<<2<<endl;
                continue;
            }
            if(db1>=x&&db2>=x){
                cout<<2<<endl;
                continue;
            }
            if(da1>=x){
                if(db1>=x){
                    cout<<2<<endl;
                    continue;
                }
                else{
                    cout<<3<<endl;
                    continue;
                }
                
            }
            if(da2>=x){
                if(db2>=x){
                    cout<<2<<endl;
                    continue;
                }
                else{
                    cout<<3<<endl;
                    continue;
                }
            }
            

        }
    }

    return 0;
}