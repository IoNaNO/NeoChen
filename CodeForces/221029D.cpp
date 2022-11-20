/**
  * @file    :221029D.cpp
  * @brief   :D. Knowledge Cards
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-29
  */
#include<bits/stdc++.h>
using namespace std;

void findtoput(set<int>&buf,int&p){
    while(p){
        auto i=buf.find(p);
        if(i==buf.end()){
            return;
        }
        else{
            p--;
            buf.erase(i);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin>>tt;
    while(tt--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> a(k);
        for(int i=0;i<k;i++){
            cin>>a[i];
        }
        set<int> await;
        int maxwait=n*m-4;
        int put=k;
        bool flag=true;
        for(auto move:a){
            if(move==put){
                put--;
                findtoput(await,put);
            }
            else{
                await.insert(move);
                if(await.size()>maxwait){
                    flag=false;
                    break;
                }
            }
        }
        if(flag){
            cout<<"YA"<<endl;
        }
        else{
            cout<<"TIDAK"<<endl;
        }

    }


    return 0;
}