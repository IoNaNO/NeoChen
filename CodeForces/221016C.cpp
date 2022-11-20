/**
  * @file    :221016C.cpp
  * @brief   :C. Traffic Light
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
        char now;
        cin >> n >> now;
        
        string s;
        cin >> s;
        if (now == 'g')
        {
            cout << 0 << endl;
            continue;
        }
        s += s;
        int t = 0;
        set<int> green;
        vector<int> ns;
        int j = 0;
        for (int i = 0; i < s.size(); i++)
        {

            if (j < n && s[j] == now)
            {
                ns.push_back(j);
            }
            j++;
            if (s[i] == 'g')
            {
                green.insert(i);
            }
        }

        for (auto i : ns)
        {
            t = max(*green.upper_bound(i)-i, t);
        }
        
        cout << t << endl;

    }

    return 0;
}