/**
  * @file    :221012A.cpp
  * @brief   :
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
    string boy = "Timur";
    map<char, bool>  input;
    for (auto m : boy)
    {
        input[m] = false;
    }
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        string name;
        map<char, bool> test(input);
        cin >> name;
        if (n != boy.size())
        {
            cout << "NO" << endl;
        }
        else
        {
            for (auto k : name)
            {
                test[k] = true;
            }
            bool con = true;
            for (auto k : boy)
            {
                if (test[k] == false)
                {
                    cout << "NO" << endl;
                    con = false;
                    break;
                }
                
            }
            if(con)
                cout << "YES" << endl;
        }
    }

    return 0;
}