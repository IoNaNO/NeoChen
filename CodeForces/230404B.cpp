#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin>>tt;
    while(tt--){
        int n,x1,y1,x2,y2;
        cin>>n>>x1>>y1>>x2>>y2;
        double mid=(1+n)/2.0;
        double lay1=max(abs(x1-mid),abs(y1-mid));
        double lay2=max(abs(x2-mid),abs(y2-mid));
        cout<<(int)abs(lay1-lay2)<<endl;
    }

    return 0;
}