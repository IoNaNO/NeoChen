/**
  * @file    :221013A.cpp
  * @brief   :A. Sum
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-13
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
        vector<int> m;
        for (int i = 0; i < 3; i++)
        {
            int t;
            cin >> t;
            m.push_back(t);
        }
        sort(m.begin(), m.end());
        if (m[0] + m[1] == m[2])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}