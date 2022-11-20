/**
  * @file    :221118D.cpp
  * @brief   :D. Make It Round
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-11-18
  */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void cnt10(int num,int&c2,int&c5){
    c2=0;
    c5=0;
    while(num%2==0){
        c2++;
        num/=2;
    }
    while(num%5==0){
        c5++;
        num/=5;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin>>tt;
    while(tt--){
        int n,m;
        cin>>n>>m;

        int cnt2,cnt5;
        cnt10(n,cnt2,cnt5);
        ll base=1;
        if(cnt2<cnt5){
            if(2>m){
                cout<<m*n<<endl;
                continue;
            }
            int c=cnt5-cnt2;
            while(c--){
                base*=2;
            }
            while(base>m){
                base/=2;
            }
            
        }
        else if(cnt2>cnt5){
            if(5>m){
                cout<<m*(ll)n<<endl;
                continue;
            }
            int c=cnt2-cnt5;
            while(c--){
                base*=5;
            }
            while(base>m){
                base/=5;
            }      
        }
        while(base<=m){
            base*=10;
        }
        base/=10;

        base=m/base*base;
        ll res=n*base;
        cout<<res<<endl;

    }


    return 0;
}