#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string> res;
        for(auto&q:queries){
            for(auto&dic:dictionary){
                if(q.size()!=dic.size()){
                    continue;
                }
                int cnt=0;
                int i=0;
                for(i=0;i<q.size();i++)
                {
                    if(q[i]!=dic[i]){
                        cnt++;
                    }
                    if(cnt==3){
                        break;
                    }
                }
                if(i==q.size()){
                    res.push_back(q);
                    break;
                }
            }
        }
        return res;
    }
};