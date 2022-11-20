/**
  * @file    :221013D.cpp
  * @brief   :D. Coprime
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-13
  */
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

const int MAX_VAL = 1001;
vector<vector<int>> ELK(MAX_VAL, vector<int>(MAX_VAL));

inline int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        for(int i=1;i<MAX_VAL;i++)
            for (int j = 1; j < MAX_VAL; j++)
            {
                if (gcd(i, j) == 1)
                {
                    ELK[i][j] = true;
                }
            }
        unordered_map<int, int> rec;
        int ans = -1;
        for (int i = 1; i <= n; i++)
        {
            int t;
            cin >> t;
            rec[t]=i;
            for (int num = 1; num < MAX_VAL; num++)
            {
                if (ELK[t][num])
                {
                    if(rec[num])
                        ans = max(ans, i + rec[num]);
                }
            }
        }
        cout << ans << endl;
    }


    return 0;
}