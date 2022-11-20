/**
 * @file    :221022A.cpp
 * @brief   :A. Password
 * @author  :NeoChen
 * @version :V1.0.0
 * @date    :2022-10-22
 */

#include <bits/stdc++.h>
using namespace std;

int f(int k)
{
    int t = k * (k - 1);
    return t / 2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> nodigits;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            nodigits.push_back(t);
        }
        int ans;
        ans = f(4) * f(10 - n);
        cout<<ans<<endl;
    }

    return 0;
}