#include<bits/stdc++.h>
using namespace std;

const int MAX=60000;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> prefix(MAX+1);
    for(int i=0;i<MAX;i++){
        prefix[i]=i;
    }
    for(int i=0;i<MAX;i++){
        prefix[i+1]+=prefix[i];
    }
    
    int x;
    cin>>x;

    string res;
    string s="red";
    int cnt=0;
    while(x){
        auto d=lower_bound(prefix.begin(),prefix.end(),x);
        int t=0;
        int cur=0;
        if(*d==x){
            t=d-prefix.begin();
            cur=*d;
        }
        else{
            t=d-prefix.begin()-1;
            cur=*(d-1);
        }

        while(t--){
            res.push_back(s[cnt%3]);
        }
        x-=cur;
        cnt++;
    }
    cout<<res<<endl;
    return 0;
}