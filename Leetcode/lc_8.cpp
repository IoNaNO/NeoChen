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
    bool isdigi(char c){
        return c>='0'&&c<='9';
    }
    int myAtoi(string s) {
        const int MAX=INT32_MAX;
        const int MIN=INT32_MIN;
        int ans=0;
        auto i=s.begin();
        bool pos=true;
        bool ifzero=false;
        for(;i<s.end();i++){
            if(*i=='\040'){
                if(ifzero){
                    return 0;
                }
                continue;
            }
            else if(*i=='+'){
                if(isdigi(*(i+1))==false||ifzero)
                    return 0;
                continue;
            }
            else if(*i=='-'){
                if(isdigi(*(i+1))==false||ifzero)
                    return 0;
                if(pos){
                    pos=false;
                }
                else{
                    pos=true;
                }
                continue;
            }
            else if(*i=='0'){
                ifzero=true;
                continue;
            }
            else if(*i>'0'&&*i<='9'){
                break;
            }
            else{
                return 0;
            }
        }
        auto j=i;
        for(j++;j<s.end();j++){
            if(*j<'0'||*j>'9'){
                break;
            }
        }
        string ss(i,j);
        if(ss.size()>10){
            if(pos){
                return MAX;
            }
            else{
                return MIN;
            }
        }
        ll pre=0;
        sscanf(ss.c_str(),"%lld",&pre);
        if(pos){
            if(pre>MAX){
                return MAX;
            }
            else{
                ans=pre;
                return ans;
            }
        }
        else{
            pre*=-1;
            if(pre<MIN){
                return MIN;
            }
            else{
                ans=pre;
                return ans;
            }
        }
    }
};