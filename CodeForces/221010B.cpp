/**
  * @file    :221010B.cpp
  * @brief   :B. Playing with GCD
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-10
  */
#include<bits/stdc++.h>
using namespace std;

inline int gcd(int m, int n)
{
    if (n)
        return gcd(n, m % n);
    else
        return m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt=0;
    cin >> tt;
    while (tt--)
    {
        int n = 0;
        cin >> n;
        if (n <= 2)
        {
            int temp[5];
            while (n)
            {
                cin >> temp[--n];
            }
            cout << "Yes" << endl;
            continue;
        }
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int num = 0;
            cin >> num;
            arr.push_back(num);
        }
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (i && i != n - 1)
            {
                int r, q;
                r = arr[i - 1] / gcd(arr[i - 1], arr[i]);
                q = arr[i + 1] / gcd(arr[i + 1], arr[i]);
                if (gcd(r, q) != 1)
                {
                    flag = false;
                    break;
                }

            }
        }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        
    }
    return 0;
}