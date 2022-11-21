/**
  * @file    :221120B.cpp
  * @brief   :B - Elimination of a Ring
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-11-20
  */
#include<bits/stdc++.h>
using namespace std;

// void merge(vector<int>&r){
//     while(r.size()>1){
//         if(r.front()==r.back()){
//             r.erase(r.begin());
//         }
//         else{
//             break;
//         }
//     }
// }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int> ring(n);
        for(int i=0;i<n;i++){
            cin>>ring[i];
        }

        int cnt=0;
        while(ring.size()>1){
            bool flag=false;
            for(int i=0;i<ring.size();i++){
                if(!i){
                    if(ring[1]!=ring.back()){
                        flag=true;
                        //ring.erase(ring.begin());
                        break;
                    }
                }
                else if(i==ring.size()-1){
                    if(ring[i-1]!=ring[0]){
                        flag=true;
                        //ring.erase(ring.begin()+i);
                        break;
                    }
                }
                else{
                    if(ring[i-1]!=ring[i+1]){
                        flag=true;
                        //ring.erase(ring.begin()+i);
                        break;
                    }
                }

            }
            //cnt++;
            if(flag){
                cnt=n;
            }
            else{
                cnt=n/2+1;
            }
            //ring.erase(ring.begin());
            //merge(ring);
            break;
        }
        if(ring.size()==1){
            cnt=1;
        }
        cout<<cnt<<endl;
    }

    return 0;
}