/**
  * @file    :221016B.cpp
  * @brief   :B. Even-Odd Increments
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-16
  */
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, q;
        cin >> n >> q;
        int even = 0;
        int odd = 0;
        ll sum=0;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            if (t % 2)
            {
                odd++;
                sum += t;
            }
            else {
                even++;
                sum += t;
            }
        }
        for (int i = 0; i < q; i++)
        {
            int type, xj;
            cin >> type >> xj;
            if (type) {
                sum += xj * odd;
                if (xj % 2) {
                    // o+o=e
                    even += odd;
                    odd = 0;
                }
                
                    // o+e=o do nothing
            }
            else {
                sum += xj * even;
                if (xj % 2) {
                    // e+o=o;
                    odd += even;
                    even = 0;
                }
            }
            cout << sum << endl;
        }

    }

    return 0;
}
