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
    int xorBeauty(vector<int>& nums) {
        int res=0;
        for(auto i:nums){
            res^=i;
        }
        return res;
    }
};