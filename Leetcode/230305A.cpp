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
    int passThePillow(int n, int time) {
        int m=2*(n-1);
        int tar=time%m;
        if(tar>m/2){
            return 2*n-tar-1;
        }
        else{
            return tar+1;
        }
    }
};