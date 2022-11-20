/**
  * @file    :221015A.cpp
  * @brief   :A - A Recursive Function
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-15
  */

#include<bits/stdc++.h>
using namespace std;

int f(int n)
{
    if (n == 0)
        return 1;
    else
        return n * f(n - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    cout << f(n) << endl;


    return 0;
}