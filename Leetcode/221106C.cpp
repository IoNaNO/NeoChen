#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    return 0;
}

typedef long long ll;
class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        auto st=costs.begin();
        auto ed=costs.end();
        ll sum=0;
        while(k--){
            if(costs.size()<=2*candidates){
                int minc=INT32_MAX;
                auto tar=costs.begin();
                for(st=costs.begin();st<costs.end();st++){
                    if(minc>*st){
                        minc=*st;
                        tar=st;
                    }
                }
                costs.erase(tar);
                sum+=minc;
            }
            else{
                int fminc=INT32_MAX;
                auto ftar=costs.begin();
                for(st=costs.begin();st<costs.begin()+candidates;st++){
                    if(fminc>*st){
                        fminc=*st;
                        ftar=st;
                    }
                }
                int bminc=fminc;
                auto btar=ftar;
                for(st=costs.end()-candidates;st<costs.end();st++){
                    if(bminc>*st){
                        bminc=*st;
                        btar=st; 
                    }
                }
                // if(bminc<fminc){
                //     fminc=bminc;
                //     ftar=btar;
                // }
                costs.erase(btar);
                sum+=bminc;
            }

        }
        return sum;
    }
};