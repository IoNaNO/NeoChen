#include<bits/stdc++.h>
using namespace std;




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin>>tt;
    while (tt--)
    {
        int n,d;
        cin>>n>>d;
        string str;
        cin>>str;
        int i;
        for(i=0;i<n;i++){
            if(str[i]<d+'0'){
                break;
            }
        }
        str.insert(str.begin()+i,d+'0');
        cout<<str<<endl;
    }
    

    return 0;
}