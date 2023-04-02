#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;
    string str;
    cin>>str;
    set<string> subs;
    for(int i=1;i<n-1;i++){
        string t;
        for (int s = i + 1; s < n; s++) {
            t.clear();
            for (int j = s; j >= 0; j--) {
                int k = 2 * i - j;
                if (k >= 0 && k < n) {
                    if (str[k] == str[j]) {
                        t.push_back(str[j]);
                        string r(t.rbegin(), t.rend());
                        if (t.size() > 1&&j<=i) {
                            // cout <<"k:"<<k<<"j:"<<j << t << endl;
                            subs.insert(t);
                            subs.insert(r);
                        }
                    }
                    else {
                        t.clear();
                        break;
                    }
                }
                else {
                    t.clear();
                    break;
                }
            }
        }
    }
    cout<<subs.size() << endl;
    return 0;
}