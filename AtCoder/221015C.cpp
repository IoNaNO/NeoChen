/**
  * @file    :221015C.cpp
  * @brief   :C - (K+1)-th Largest Number
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

    vector<int> A;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int Ai;
        cin >> Ai;
        A.push_back(Ai);
    }

    sort(A.rbegin(), A.rend());
    A.push_back(0);
    int c = 1;
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] != A[i + 1])
        {
            cout << c << endl;
            c = 1;
            b++;
        }
        else
            c++;
    }
    for (int i = b; i < n; i++)
    {
        cout << 0 << endl;
    }
    
    return 0;
}