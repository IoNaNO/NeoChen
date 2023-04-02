#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N,M;
    cin>>N>>M;
    vector<int> toys(N);
    for(int i=0;i<M;i++){
        int t;
        cin>>t;
        toys[t-1]++;
    }
    int Q;
    cin>>Q;
    while(Q--){
        int qi;
        cin>>qi;
        int cnt=0;
        for(int i=0;i<N;i++){
            if(toys[i]==qi){
                cnt++;
            }
        }
        cout<<cnt<<' ';
    }
    return 0;
}