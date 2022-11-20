/**
  * @file    :221015C.cpp
  * @brief   :C. Permutation Operations
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-15
  */
#include<bits/stdc++.h>
using namespace std;

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
        vector<int> a;
        vector<pair<int,int>> b;
        a.push_back(0);
        for (int i = 1; i <= n; i++)
        {
            int t;
            cin >> t;
            a.push_back(t);
            b.push_back({ t - a[i - 1] ,i-1});
        }
        sort(b.rbegin(), b.rend());
        for (auto& m : b)
        {
            if (m.first > 0)
            {
                cout << '1' << ' ';
            }
            else
            {
                cout << m.second+1 << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}