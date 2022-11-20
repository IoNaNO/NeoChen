/**
  * @file    :221009A.cpp
  * @brief   :A - Continuous 1
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-09
  */
#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T = 0;
    cin >> T;
    string str;
    for (int i = 0; i < T; i++)
    {
        int N = 0;
        int K = 0;
        cin >> N >> K;
        cin >> str;

        bool flag = false;
        for (int i = 0; i < N; i++)
        {
            if (i)
            {
                if (str[i - 1] != '1'&&str[i]!='0')
                {
                    int j = 0;
                    for (j = i + 1; j < i + K&&j<N; j++)
                        if (str[j] == '0')
                            break;
                    
                    if (j == i + K)
                    {
                        if (j == N || str[j] != '1')
                        {
                            if (flag == false)
                            {
                                flag = true;
                                continue;
                            }
                            else
                            {
                                flag = false;
                                break;
                            }
                        }
                    }
                    else if (j == N)
                        break;
                }
                
            }
            else
            {
                if (str[i] != '0') {
                    int j = 0;
                    for (j = i + 1; j < i + K && j < N; j++)
                        if (str[j] == '0')
                            break;

                    if (j == i + K)
                    {
                        if (j == N || str[j] != '1')
                        {
                            if (flag == false)
                            {
                                flag = true;
                                continue;
                            }
                            else
                            {
                                flag = false;
                                break;
                            }
                        }
                    }
                    else if (j == N)
                        break;
                }
            }
        }

        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}