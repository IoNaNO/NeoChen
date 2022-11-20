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
    int averageValue(vector<int>& nums) {
        int cnt=0;
        int sum=0;
        for(auto&i:nums){
            if(i%6==0){
                cnt++;
                sum+=i;
            }
        }
        if(cnt){
            return sum/cnt;}
        else{
            return 0;
        }
    }
};
