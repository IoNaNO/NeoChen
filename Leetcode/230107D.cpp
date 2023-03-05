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
    long long maxPower(vector<int>& stations, int r, int k) {
        int n=stations.size();
        vector<int> power(n);
        for(int i=0;i<r+1;i++){
            power[0]=stations[i];
        }
        for(int i=1;i<n;i++){
            if(i-r-1>=0){
                power[i]=power[i-1]-stations[i-r-1];
            }
            if(i+r<n){
                power[i]=stations[i+r];
            }
        }
        
    }
};