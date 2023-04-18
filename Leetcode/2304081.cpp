#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n,m,a;
    cin>>n>>m>>a;
    vector<vector<int>> seats(n,vector<int>(m*a));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            string str;
            cin>>str;
            for(int k=0;k<a;k++){
                if(str[k]=='1'){
                    seats[i][j*a+k]=1;
                }
            }
        }
    }
    vector<vector<int>> nseats(seats);
    vector<int> n_row(nseats.back());
    nseats.pop_back();
    nseats.insert(nseats.begin(), n_row);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        vector<int> temp(nseats[i]);
        for (int j = 0; j < m * a; j++) {
            nseats[i][(j + a) % (m * a)] = temp[j];
            if (nseats[i][(j + a) % (m * a)] != seats[i][(j + a) % (m * a)]) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}