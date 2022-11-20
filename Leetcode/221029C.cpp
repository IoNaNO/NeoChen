#include<bits/stdc++.h>
using namespace std;

int main() {



    return 0;
}

class Solution {
public:
    int destroyTargets(vector<int>& nums, int space) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        sort(nums.begin(),nums.end());
        vector<int> nmod(nums);
        map<int,int> findmaxmod;
        for(int i=0;i<nums.size();i++){
            nmod[i]=nums[i]%space;
            findmaxmod[nmod[i]]++;
        }
        int maxmod=0;
        set<int> mods;
        for(auto&i:findmaxmod){
            if(i.second>maxmod){
                maxmod=i.second;
                mods.clear();
                mods.insert(i.first);
            }
            else if(i.second==maxmod){
                mods.insert(i.first);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(mods.find(nmod[i])!=mods.end()){
                return nums[i];
            }
        }
        return 0;
    }
};