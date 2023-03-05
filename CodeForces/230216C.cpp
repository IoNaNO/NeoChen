#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n,m;
    cin>>n>>m;

    vector<int> rival(n);
    vector<int> niu(m);

    for(int i=0;i<n;i++){
        cin>>rival[i];
    }
    for(int i=0;i<m;i++){
        cin>>niu[i];
    }

    return 0;
}