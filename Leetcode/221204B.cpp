#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int max=1005;
        ll sum=0;
        vector<int> s(max);
        int n=skill.size();
        for(auto&m:skill){
            sum+=m;
            s[m]++;
        }
        int ts=sum/(n/2);
        ll res=0;
        for(int i=1;i<=1000;i++){
            if(s[i]){
                if(i==ts-i){
                    if(s[i]%2==0){
                        int t=s[i]/2;
                        res+=(i*i*(ll)t);
                        continue;
                    }
                    else{
                        return -1;
                    }
                }
                if(i>=ts){
                    return -1;
                }
                if(s[ts-i]!=s[i]){
                    return -1;
                }
                res+=(i*(ts-i)*(ll)s[i]);
                s[ts-i]=0;
            }
        }
        return res;

    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    

    return 0;
}