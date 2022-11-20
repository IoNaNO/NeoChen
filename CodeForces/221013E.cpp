/**
  * @file    :221013E.cpp
  * @brief   :E. Scuza
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-13
  */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int binSearch(vector<int>& arr, int tar)
{
    int low = 0;
    int high = arr.size() - 1;
    while (low<high)
    {
        int mid = (low + high+1) / 2;
        if (arr[mid] <= tar)
        {
            low = mid;
        }
        else
        {
            high = mid-1;
        }
    }
    return low;
}


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
        vector<int> stair;
        vector<ll> h;
        vector<int> K;
        vector<int> leg;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            stair.push_back(t);
        }
        for (int i = 0; i < q; i++)
        {
            int t;
            cin >> t;
            K.push_back(t);
        }
        h.assign(stair.begin(), stair.end());
        leg.resize(n, 0);
        leg.insert(leg.begin(), 0);
        h.insert(h.begin(), 0);
        for (int i = 1; i <= n; i++)
        {
            h[i] += h[i - 1];
            leg[i] = max(leg[i - 1], stair[i-1]);
        }

        for (auto& ki : K)
        {
            int index = binSearch(leg, ki);
            cout << h[index] << ' ';
        }
        cout << endl;
    }


    return 0;
}