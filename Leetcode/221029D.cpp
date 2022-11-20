#include<bits/stdc++.h>
using namespace std;

int main() {



    return 0;
}

class Solution {
private:
    struct ele
    {
        int num=0;
        int index=0;
        int cnt=0;
    };
public:
    vector<int> secondGreaterElement(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        vector<ele> spsta;
        vector<int> ntbig(nums.size(),-1);
        for(int i=0;i<nums.size();i++){
            ele j={nums[i],i,0};
            for(auto i=spsta.begin();i<spsta.end();i++){
                if(j.num>i->num){
                    i->cnt++;
                    if(i->cnt==2){
                        ntbig[i->index]=j.num;
                        spsta.erase(i--);
                    }
                }
            }
            spsta.insert(spsta.begin(),j);
        }
        return ntbig;    
    }
};

class Solution {
private:
public:
    vector<int> secondGreaterElement(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n=nums.size();
        vector<int> nxbig(n,-1);
        vector<pair<int,int>> t;
        for(int i=0;i<n;i++){
            t.push_back({-nums[i],i});
        }
        sort(t.begin(),t.end());
        set<int> s;
        for(int i=0;i<n;i++){
            auto it=s.upper_bound(t[i].second);
            if(it!=s.end()&&next(it)!=s.end()){
                nxbig[t[i].second]=nums[*next(it)];
            }
            
            s.insert(t[i].second);
        }
    
        return nxbig;
    }
};