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
    bool isCircularSentence(string sentence) {
        char last=0;
        for(auto i=sentence.begin();i<sentence.end();i++){
            if(*i=='\040'){
                if((i+1)!=sentence.end()){
                    if(*(i+1)!=*(i-1)){
                        return false;
                    }
                }
            }
        }     
        if(sentence.back()!=sentence.front()){
            return false;
        }
        return true;
    }
};