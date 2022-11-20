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
    vector<vector<string>> mostPopularCreator(vector<string>& creators, vector<string>& ids, vector<int>& views) {
        int n=creators.size();
        map<string,ll> cnt_maxc;
        map<string,set<pair<int,string>>> cnt_views;
        set<string> maxc;

        for(int i=0;i<n;i++){
            cnt_maxc[creators[i]]+=(ll)views[i];
            cnt_views[creators[i]].insert(make_pair(-views[i],ids[i]));
        }
        ll vcnt=0;
        for(auto&m:cnt_maxc){
            if(vcnt<m.second){
                vcnt=m.second;
                maxc.clear();
                maxc.insert(m.first);
            }
            else if(vcnt==m.second){
                maxc.insert(m.first);
            }
        }

        vector<vector<string>> answer;
        for(auto&m:maxc){
            vector<string> astr;
            astr.push_back(m);
            astr.push_back(cnt_views[m].begin()->second);
            answer.push_back(astr);
        }
        return answer;

    }
};