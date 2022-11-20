/**
  * @file    :221012B.cpp
  * @brief   :B. Colourblindness
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-12
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
        string a, b;
        cin >> a >> b;
        bool con = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'R')
            {
                if (b[i] == 'R')
                    continue;
                else
                {
                    cout << "NO" << endl;
                    con = false;
                    break;
                }
            }
            else
            {
                if (b[i] == 'R')
                {
                    cout << "NO" << endl;
                    con = false;
                    break;
                }
            }
        }
        if (con)
            cout << "YES" << endl;
    }


    return 0;
}