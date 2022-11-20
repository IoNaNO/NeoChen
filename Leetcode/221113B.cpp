/**
  * @file    :221113B.cpp
  * @brief   :
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-11-13
  */
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    return 0;
}

class Solution {
public:
    int gcd(int m,int n){
        if(n==0){
            return m;
        }
        if(m%n==0){
            return n;
        }
        return gcd(m,m%n);
    }
    int subarrayLCM(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> gn(nums);
        vector<int> pos0;
        for(int i=0;i<n;i++){
            if(k%gn[i]==0){
                gn[i]=k/gn[i];
            }
            else{
                gn[i]=0;
                pos0.push_back(i);
            }
        }

        int cnt=0;
        pos0.insert(pos0.begin(),-1);
        pos0.push_back(n);
        for(int p0=0;p0<pos0.size()-1;p0++){
                for(int i=pos0[p0]+1;i<pos0[p0+1];i++){
                    int g=gn[i];
                    for(int j=i;j<pos0[p0];j++){
                        g=gcd(g,gn[j]);
                        if(g==1){
                            cnt+=pos0[p0]-j;
                            break;
                        }
                    }                    
            }
        }
        return cnt;
    }
};