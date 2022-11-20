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
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans=0;
        int n=nums.size();
        map<int,vector<int>> pos;

        vector<ll> prefix(n+1);
        for(int i=1;i<=n;i++){
            prefix[i]=prefix[i-1]+nums[i-1];
        }

        for(int i=0;i<n;i++){
            pos[nums[i]].push_back(i);
        }

        vector<bool> boxs(n-k+1,true);

        for(auto&m:pos){
            if(m.second.size()>1){
                for(auto i=m.second.begin();i<(m.second.end()-1);i++){
                    int dis=*(i+1)-*i;
                    if(dis<k){
                        int finx=*(i+1)-k+1;
                        if(finx<0){
                            finx=0;
                        }
                        for(;finx<=*i;finx++){
                            boxs[finx]=false;
                        }
                    }
                }
            }
        }

        for(int i=0;i<n-k+1;i++){
            if(boxs[i]){
                ll t=prefix[i+k]-prefix[i];
                if(t>ans){
                    ans=t;
                }
            }
        }
        
        return ans;
    }
};

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        ll ans=0;
        map<int,int> cnt;
        for(int i=0;i<n-k+1;i++){
            ll t=0;
            int j=i;
            bool f=true;
            cnt.clear();
            for(j=i;j<i+k;j++){
                int tt=cnt[nums[j]];
                if(tt){
                    i=tt-1;
                    f=false;
                    break;
                }
                else{
                    cnt[nums[j]]=j+1;
                    t+=nums[j];
                }
            }
            if(f){
                if(t>ans){
                    ans=t;
                }
            }
        }
        return ans;      
    }
};