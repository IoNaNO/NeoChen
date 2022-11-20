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
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        for(auto i=nums.begin();i<nums.end();i++)
        {
            if(*i==0){
                nums.erase(i);
                i--;
            }
        }
        for(int j=nums.size();j<n;j++){
            nums.push_back(0);
        }
        return nums;
    }
};