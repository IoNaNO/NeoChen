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
    void merge(vector<string>&str,string&s){
        for(auto&m:str){
            s+=m;
        }
    }
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1,s2;
        merge(word1,s1);
        merge(word2,s2);
        return s1==s2;
    }
};