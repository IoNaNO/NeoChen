/**
  * @file    :221012C.cpp
  * @brief   :C. Word Game
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
        map<string, int> count;
        int n;
        cin >> n;
        vector<string> A(n);
        vector<string> B(n);
        vector<string> C(n);
        string t;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            count[t]++;
            A.push_back(t);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            count[t]++;
            B.push_back(t);
        }        
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            count[t]++;
            C.push_back(t);
        }
        int a = 0;
        int b = 0;
        int c = 0;
        for (auto m : A)
        {
            int d = count[m];
            if (d == 1)
                a+=3;
            else if (d == 2)
                a++;
        }
        for (auto m : B)
        {
            int d = count[m];
            if (d == 1)
                b += 3;
            else if (d == 2)
                b++;
        }
        for (auto m : C)
        {
            int d = count[m];
            if (d == 1)
                c += 3;
            else if (d == 2)
                c++;
        }
        cout << a << ' ' << b << ' ' << c << endl;
    }

    return 0;
}