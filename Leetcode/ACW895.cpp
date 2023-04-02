#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n=0;
    cin>>n;
    vector<int> nums(n+1);
    for(int i=1;i<=n;i++){
        cin>>nums[i];
    }
    vector<int> f(n+1,1);
    for(int i=1;i<=n;i++){
        int t=1;
        for(int j=1;j<i;j++){
            int r=0;
            if(nums[j]<nums[i]){
                r=f[j]+1;
            }
            
            if(t<r){
                t=r;
            }
        }
        f[i]=t;
    }
    int res=0;
    for(auto&i:f){
        if(i>res){
            res=i;
        }
    }
    cout<<res<<endl;
    return 0;
}