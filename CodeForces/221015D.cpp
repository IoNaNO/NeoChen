/**
  * @file    :221015D.cpp
  * @brief   :D. Paths on the Tree
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
        int n, k;
        cin >> n >> k;
        map<int, set<int>> adj;
        vector<int> s(n + 1);
        vector<int> c(n + 1);
        int sum = 0;
        for (int i = 2; i <= n;i++)
        {
            int t;
            cin >> t;
            adj[i].insert(t);
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> s[i];
        }

        c[1] = k;
        vector<int> extend;
        extend.push_back(1);
        while (true)
        {
            int cursor = extend.back();
            extend.pop_back();

        }
    }

    return 0;
}