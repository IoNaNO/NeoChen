/**
  * @file    :221118A.cpp
  * @brief   :
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
    while (tt--)
    {
        string in;
        cin>>in;
        bool flag=true;
        if(in.size()==1){
            if(in=="Y"){
                flag=true;
            }
            else if(in=="e"){
                flag=true;
            }
            else if(in=="s"){
                flag=true;
            }
            else{
                flag=false;
            }
            if(flag){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            continue;
        }
        for(int i=0;i<in.size()-1;i++){
            if(in[i]=='Y'){
                if(in[i+1]=='e'){
                    continue;
                }
                else{
                    flag=false;
                    break;
                }
            }
            else if(in[i]=='e'){
                if(in[i+1]=='s'){
                    continue;
                }
                else{
                    flag=false;
                    break;
                }                
            }
            else if(in[i]=='s'){
                if(in[i+1]=='Y'){
                    continue;
                }
                else{
                    flag=false;
                    break;
                }
            }
            else{
                flag=false;
                break;
            }
        }
            if(flag){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

    }
    


    return 0;
}