/**
  * @file    :221113A.cpp
  * @brief   :
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-11-13
  */
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    return 0;
}

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        ans.push_back(celsius+273.15);
        ans.push_back(celsius*1.8+32);
        return ans;
    }
};