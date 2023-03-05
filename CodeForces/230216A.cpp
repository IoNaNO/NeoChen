#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;
    vector<pair<int,int>> planes(n);
    vector<int> coords(n);
    set<pair<int,int>> vels;
    for(int i=0;i<n;i++){
        cin>>planes[i].first>>planes[i].second;
        coords[i]=planes[i].first;
        vels.insert(make_pair(planes[i].second,planes[i].first));
    }
    sort(coords.begin(),coords.end());

    for(int i=0;i<n;i++){
        auto k=distance(vels.begin(),vels.find({planes[i].second,planes[i].first}));
        cout<<coords[k]<<' '<<planes[i].second<<endl;
    }

    return 0;
}