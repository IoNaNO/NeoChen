/**
  * @file    :221016D.cpp
  * @brief   :D. Divisibility by 2^n
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-16
  */
#include<bits/stdc++.h>
using namespace std;

int find2(int a)
{
    int count = 0;
    while(a % 2 == 0)
    {
        count++;
        a /= 2;
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        int nn = 0;
        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            nn += find2(t);
        }
        vector<int> has2;
        for (int i = 1; i <= n; i++)
        {
            int t = find2(i);
            has2.push_back(t);
        }
        sort(has2.begin(), has2.end());
        int op = 0;
        
        while (nn < n&&!has2.empty())
        {
            op++;
            int k = has2.back();
            if (!k)
            {
                break;
            }
            nn += k;
            has2.pop_back();
        }
        if (nn < n)
            cout << -1 << endl;
        else
            cout << op << endl;
    }

    return 0;
}