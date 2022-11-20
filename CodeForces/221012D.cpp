/**
  * @file    :221012D.cpp
  * @brief   :D. Line
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-12
  */
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        string str;
        vector<int> arr;
        cin>>n>>str;
        ll sum = 0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='L')
            {
                sum += i;
                if (i <= (n-1) / 2)
                    arr.push_back(n - 1 - 2 * i);
                else
                    arr.push_back(0);
            }
            else
            {
                sum += n - 1 - i;
                if (i <= (n - 1) / 2)
                    arr.push_back(0);
                else
                    arr.push_back(2 * i + 1 - n);
            }
        }
        sort(arr.rbegin(), arr.rend());
        for (int k = 0; k < n; k++)
        {
            sum += arr[k];
            cout << sum << ' ';
        }
        cout << endl;
    }


    return 0;
}