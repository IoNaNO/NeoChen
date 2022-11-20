/**
  * @file    :221016A.cpp
  * @brief   :A. Number Replacement
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-16
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
        set<int> num;
        map<int,set<int>> arr;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            arr[t].insert(i);
            num.insert(t);
        }
        string str;
        cin >> str;
        bool flag = true;
        for (auto m : num)
        {
            char ch = str[*arr[m].begin()];
            for (auto k : arr[m])
            {
                if (ch != str[k])
                {
                    flag = false;
                    break;
                }
            }
            if (flag == false)
                break;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }


    return 0;
}