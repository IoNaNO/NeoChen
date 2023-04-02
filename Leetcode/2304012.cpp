#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;
    vector<int> arr(n);
    int mmax=INT_MIN;
    int mmin=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mmax=max(arr[i],mmax);
        mmin=min(arr[i],mmin);
    }
    cout<<mmax-mmin<<endl;

    return 0;
}