/**
  * @file    :221015B.cpp
  * @brief   :B - Broken Rounding
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-15
  */

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll x = 0;
    int k = 0;
    cin >> x >> k;
    bool flag = true;
    int i = 1;
    while (i<=k) {
        ll t = pow(10, i++);
        if (x % t >= (t / 2))
        {
            x -= (x % t);
            x += t;
        }
        else
        {
            x -= (x % t);
        }
        if (!x)
        {
            break;
        }
    }

    cout << x << endl;

    return 0;
}