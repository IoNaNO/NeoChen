/**
  * @file    :221013C.cpp
  * @brief   :
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-13
  */

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt;
    string B = "BBBBBBBB";
    string R = "RRRRRRRR";
    cin >> tt;
    while (tt--)
    {
        vector<string> grid;
        for (int i = 0; i < 8; i++)
        {
            string str;
            cin >> str;
            grid.push_back(str);
        }
        bool flag = false;
        char ans;
        for (int i = 0; i < 8; i++)
        {

            if (grid[i] == R)
            {
                flag = true;
                ans = 'R';
                break;
            }
                
        }
        if (flag==false)
            ans = 'B';
        //if (flag == false)
        //{
        //    for (int i = 0; i < 8; i++)
        //    {
        //        int f = true;
        //        if (grid[0][i] == 'B')
        //        {
        //            ans == 'B';
        //            ans = grid[0][i];
        //            for (int j = 1; j < 8; j++)
        //            {
        //                if (grid[j][i] != ans)
        //                {
        //                    f = false;
        //                    break;
        //                }
        //            }
        //            if (f)
        //            {
        //                flag = true;
        //                break;
        //            }
        //        }
        //    }
        //}
        cout << ans << endl;
    }


    return 0;
}