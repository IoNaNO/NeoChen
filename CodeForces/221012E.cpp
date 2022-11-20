/**
  * @file    :221012E.cpp
  * @brief   :E. Counting Rectangles
  * @author  :NeoChen
  * @version :V2.0.0
  * @date    :2022-10-13
  */
#include<bits/stdc++.h>
using namespace std;

const int MAX_LEN = 1001;

struct rect
{
    int h, w;
};

struct bound
{
    rect s, b;
};

typedef long long ll;
//
//bool cmph(rect a, rect b)
//{
//    return a.h < b.h;
//}
//
//bool cmpw(rect a, rect b)
//{
//    return a.w < b.w;
//}
//
//
//bool check(rect r, bound e)
//{
//    if (r.h > e.s.h && r.w > e.s.w)
//    {
//        if (r.w < e.b.w && r.h < e.b.h)
//            return true;
//    }
//    return false;
//}
vector<vector<ll>> r0(MAX_LEN,vector<ll>(MAX_LEN,0));
vector<vector<ll>> rects(r0);

void getPrefix()
{
    for(int i=1;i<MAX_LEN;i++)
        for (int j = 1; j < MAX_LEN; j++)
        {
            rects[i][j] = rects[i][j] + rects[i - 1][j] + rects[i][j - 1] - rects[i - 1][j - 1];
        }
}

ll getAns(bound edge)
{
    return rects[edge.b.h-1][edge.b.w-1] + rects[edge.s.h][edge.s.w] - rects[edge.s.h][edge.b.w-1] - rects[edge.b.h-1][edge.s.w];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        rects.assign(r0.begin(), r0.end());
        int n,q;
        cin >> n>>q;
        for (int i = 0; i < n; i++)
        {
            int h, w;
            cin >> h >> w;
            rects[h][w]+=h*w;
        }

        vector<bound> bounds;
        for (int i = 0; i < q; i++)
        {
            bound e;
            cin >> e.s.h >> e.s.w >> e.b.h >> e.b.w;
            bounds.push_back(e);
        }
        getPrefix();
        ll sum = 0;
        for (auto& k : bounds)
        {
            sum = getAns(k);
            cout << sum << endl;
            sum = 0;
        }
    }

    return 0;
}