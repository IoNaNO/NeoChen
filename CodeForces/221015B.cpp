/**
  * @file    :221015B.cpp
  * @brief   :B. Rebellion
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
        vector<int> A;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            A.push_back(t);
        }
        int a = 0;
        int c = 0;
        for (int i = n - 1;; i--)
        {

            if (A[i] == 0)
            {
                while (A[a] == 0)
                {
                    if (a == i)
                        break;
                    a++;
                }
                if (A[a])
                {
                    c++;
                    a++;
                }
                else if(a == i)
                    break;
                
            }
            if (a == i)
                break;
        }
        cout << c << endl;
    }

    return 0;
}