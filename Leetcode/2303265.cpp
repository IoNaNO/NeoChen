#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n,m;
    cin>>n>>m;
    vector<string> maze;
    for(int i=0;i<n;i++){
        string t;
        cin>>t;
        maze.push_back(t);
    }
    vector<vector<int>> dp(n+1,vector<int>(m+1));
    dp[1][1]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(maze[i-1][j-1]=='#'){
                dp[i][j]=0;
            }
            else{
                for (int k = i-1; k >= 1; k--) {
                    if (maze[k-1][j-1] == '#') {
                        break;
                    }
                    dp[i][j]=(dp[i][j]+dp[k][j])%MOD;
                }
                for (int k = j - 1; k >= 1; k--) {
                    if (maze[i][k - 1] == '#') {
                        break;
                    }
                    dp[i][j] = (dp[i][j] + dp[i][k]) % MOD;
                }
            }
        }
    }
    cout<<dp[n][m]<<endl;
    return 0;
}