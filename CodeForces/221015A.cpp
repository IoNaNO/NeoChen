/**
  * @file    :221015A.cpp
  * @brief   :A. Maxmina
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
        int n, k;
        cin >> n >> k;
        vector<int> A;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            if (t) {
                flag = true;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}