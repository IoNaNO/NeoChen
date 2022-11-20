/**
  * @file    :221013B.cpp
  * @brief   :B. Increasing
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
        map<int, bool> t;
        int n;
        cin >> n;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            int in = 0;
            cin >> in;
            if (flag) {
                if (t[in] == false)
                    t[in] = true;
                else
                    flag = false;
            }

        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}