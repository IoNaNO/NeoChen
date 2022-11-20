/**
  * @file    :221015D.cpp
  * @brief   :D - LRUD Instructions
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-15
  */
#include<bits/stdc++.h>
using namespace std;
const int WALL = 2;
const int T = 1;

struct point
{
    int r, c;
};

int binsearch(vector<int>& arr, int tar)
{
    int low = 0;
    int high = arr.size() - 1;
    while (low < high)
    {
        int mid = (low + high + 1) / 2;
        if (tar < arr[mid])
        {
            high = mid - 1;
        }
        else 
        {
            low = mid;
        }

    }
    return low;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int h, w;
    point s;
    cin >> h >> w >> s.r >> s.c;
    // vector<vector<int>> grid(h+1, vector<int>(w+1, 0));
    vector<vector<int>> row(h+1);
    vector<vector<int>> col(w+1);
    int n;
    cin >> n;
    while (n--)
    {
        point wall;
        cin >> wall.r >> wall.c;
        if (row[wall.r].empty())
        {
            row[wall.r].push_back(wall.c);
        }
        else
        {
            int p = binsearch(row[wall.r], wall.c);
            row[wall.r].insert(row[wall.r].begin() + p, wall.c);
        }
        if (col[wall.c].empty())
        {
            col[wall.c].push_back(wall.r);
        }
        else
        {
            int p = binsearch(row[wall.c], wall.r);
            col[wall.c].insert(row[wall.c].begin() + p, wall.r);
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        char d; 
        int l;
        cin >> d >> l;
        switch (d)
        {
        case 'L':
            if (row[s.r].empty())
            {
                s.c = max(1, s.c - l);
            }
            else
            {
                auto p = lower_bound(row[s.r].begin(), row[s.r].end(), s.c);
                if (p != row[s.r].end())
                    s.c = *p + 1;
                else
                    s.c = max(1, s.c - l);
            }
            break;
        case 'R':
            if (row[s.r].empty())
            {
                s.c = max(1, s.c - l);
            }
            else
            {
                auto p = upper_bound(row[s.r].begin(), row[s.r].end(), s.c);
                if(p!=row[s.r].end())
                    s.c = *p - 1;
                else
                    s.c = max(w, s.c + l);
            }
            break;
        case 'U':
            
        default:
            break;
        }
    }

    return 0;
}