#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int m,n,k;
    cin>>n>>m>>k;
    vector<pair<int,int>> mines(k);
    for(int i=0;i<k;i++){
        cin>>mines[i].first>>mines[i].second;
    }
    pair<int,int> st,dst;
    cin>>st.first>>st.second>>dst.first>>dst.second;

    return 0;
}