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
    int sigSum(int x,int y,vector<vector<int>>& towers, int radius2){
        int res=0;
        for(auto&m:towers){
            double d=pow(m[0]-x,2)+pow(m[1]-y,2);
            if(d>radius2){
                continue;
            }
            d=sqrt(d);
            res+=m[2]/(1+d);
        }
        return res;
    }
    vector<int> bestCoordinate(vector<vector<int>>& towers, int radius) {
        vector<pair<int,int>> ans;
        int MAXx,MAXy,MINx,MINy;
        MAXx=INT32_MIN;
        MAXy=MAXx;
        MINx=INT32_MAX;
        MINy=MINx;
        for(auto&m:towers){
            if(m[0]>MAXx){
                MAXx=m[0];
            }
            if(m[0]<MINx){
                MINx=m[0];
            }
            if(m[1]>MAXy){
                MAXy=m[1];
            }
            if(m[1]<MINy){
                MINy=m[1];
            }
        }
        int r2=pow(radius,2);
        int sumMax=INT32_MIN;
        for(int i=MINx;i<=MAXx;i++){
            for(int j=MINy;j<=MAXy;j++){
                int s=sigSum(i,j,towers,r2);
                if(s>sumMax){
                    sumMax=s;
                    ans.clear();
                    ans.push_back(make_pair(i,j));
                }
                else if(s==sumMax){
                    ans.push_back(make_pair(i,j));
                }
            }
        }
        if(sumMax==0){
            return {0,0};
        }
        sort(ans.begin(),ans.end());
        return {ans[0].first,ans[0].second};
    }
};