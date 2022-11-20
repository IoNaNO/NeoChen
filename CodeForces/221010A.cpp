/**
  * @file    :221010A.cpp
  * @brief   :A. Make A Equal to B
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-10
  */
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
 
int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     cout.tie(nullptr);
 
     int tt = 0;
     cin >> tt;

     while (tt--)
     {
         int n;
         cin >> n;
         vector<int> a(n, 0);
         vector<int> b(n, 0);
         int ca = 0;
         int cb = 0;
         for (int i = 0; i < n; i++)
         {
             cin >> a[i];
             if (a[i])
                 ca++;
         }

         for (int i = 0; i < n; i++)
         {
             cin >> b[i];
             if (b[i])
                 cb++;
         }
         int cc = 0;
         for (int i = 0; i < n; i++)
         {
             if (a[i] != b[i])
             {
                 cc++;
             }
         }
         int d = abs(ca - cb);
         if (d == cc)
         {
             cout << d << endl;
         }
         else
         {
             cout << d + 1 << endl;
         }
     }
 
     return 0;
}