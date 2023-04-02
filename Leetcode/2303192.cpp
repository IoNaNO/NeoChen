#include<bits/stdc++.h>
using namespace std;

bool delstr(string astr,string bstr){
    map<char,int> cnt;
    string a,b;
    if(a.size()>b.size()){
        a.assign(astr.begin(),astr.end());
        b.assign(bstr.begin(),bstr.end());
    }
    else{
        b.assign(astr.begin(),astr.end());
        a.assign(bstr.begin(),bstr.end());
    }
        int j=0;
        for(int i=0;i<a.size();i++){
            if(a[i]=='m'||a[i]=='h'||a[i]=='y'){
                cnt[a[i]]++;
                if(cnt['m']<cnt['h']){
                    if(b[j]!='h'){
                        return false;
                    }
                    else{
                        j++;
                        cnt['h']--;
                    }

                }
                if(cnt['h']<cnt['y']){
                    if(b[j]!='y'){
                        return false;
                    }
                    else{
                        j++;
                        cnt['y']--;
                    }
                }
            }
            else{
                if(i==b.size()){
                    return false;
                }
                if(b[i]=='m'||b[i]=='h'||b[i]=='y'){
                    cnt[b[i++]]--;
                }
                else if(b[j]!=a[i]){
                    return false;
                }
            }
        }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int q;
    cin>>q;
    while(q--){
        string s,t;
        cin>>s>>t;
        cout<<delstr(s,t)<<endl;
    }


    return 0;
}