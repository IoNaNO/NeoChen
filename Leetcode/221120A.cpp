/**
  * @file    :221120A.cpp
  * @brief   :6241. 数组中不等三元组的数目
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-11-20
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
    int unequalTriplets(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    continue;
                }
                for(int k=j+1;k<n;k++){
                    if(nums[i]==nums[k]){
                        continue;
                    }
                    if(nums[j]==nums[k]){
                        continue;
                    }
                    cnt++;
                }
            }
        }
        return cnt;
    }
};