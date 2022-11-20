/**
  * @file    :221029E.cpp
  * @brief   :E. Hanging Hearts
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-29
  */
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;
    vector<int> p(n+1);
    set<int> leaves;
    vector<int> chidren(n+1);
    for(int i=2;i<=n;i++){
        leaves.insert(i);    
        cin>>p[i];
        chidren[p[i]]++;
        leaves.erase(leaves.find(p[i]));
    }

    vector<int> w0(n+1);
    
    
    

    return 0;
}