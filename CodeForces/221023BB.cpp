/**
  * @file    :2210232B.cpp
  * @brief   :B. Ugu
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-25
  */
#include<bits/stdc++.h>
using namespace std;

const int CASE_00=0;
const int CASE_01=1;
const int CASE_10=2;
const int CASE_11=3;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin>>tt;
    while(tt--){
        int n;
        string bstr;
        cin>>n>>bstr;
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        int op=0;
        int index=n-2;
        int sta=CASE_00;
        bool same=false;
        if(bstr[index+1]=='1'){
            sta=CASE_11;
        }
        else{
            sta=CASE_00;
        }

        for(index=n-2;index>=0;index--){
            if(sta==CASE_00||sta==CASE_11){
                same=(bstr[index]==bstr[index+1]);
                if(same){
                    continue;
                }
                else{
                    if(sta==CASE_00){
                        sta=CASE_10;
                    }
                    else if(sta==CASE_11){
                        sta=CASE_01;
                    }

                }
            }
            else if(sta==CASE_01){
                if(bstr[index]=='1'){
                    sta=CASE_10;
                    op++;    
                }
            }
            else if(sta==CASE_10){
                if(bstr[index]=='0'){
                    sta=CASE_01;
                    op++;
                }
            }
        }
        if(sta==CASE_10)
        {
            op++;
        }
        cout<<op<<endl;
    }

    return 0;
}