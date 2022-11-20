/**
  * @file    :221016E1.cpp
  * @brief   :E1. Divisible Numbers (easy version)
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-17
  */
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


void divisor(vector<pair<ll,ll>>& p, ll n)
{
    for (ll i = 1; i <=sqrt(n); i++) {
            if(n % i == 0) {
                p.push_back({ i, n / i });
            }
    }
}

int a, b, c, d;


bool fd(ll xx,ll yy, char type,int&x,int&y)
{
    if (type == 'x')
    {
        if (c % xx == 0)
        {
            x = c;
            return true;
        }
        else if ((c / xx) == ((a+1) / xx))
        {
            if ((a+1) % xx==0) {
                x = c / xx * xx;
                return true;
            }
            else {
                return false;
            }
            return false;
        }
        else {
            x = c / xx * xx;
            return true;
        }
    }
    else if (type == 'y')
    {
        if (d % yy == 0)
        {
            y = d;
            return true;
        }
        else if (((b+1) / yy) == (d / yy))
        {
            if ((b+1) % yy==0) {
                y = d / yy * yy;
                return true;
            }
            else {
                return false;
            }

            return false;
        }
        else {
            y = d / yy * yy;
            return true;
        }
    }
    else {
        return fd(xx, yy, 'x', x, y) && fd(xx, yy, 'y', x, y);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        cin >> a >> b >> c >> d;
        ll div = (ll)a * (ll)b;

        vector<pair<ll, ll>> p;
        divisor(p, div);
        vector <pair<ll, ll>> search(p);
        for (auto& k : p)
        {
            search.push_back({ k.second,k.first });
        }


        ll xx, yy;
        xx = 1;
        yy = div;
        bool flag = false;
        for (int i = 0; i < search.size(); i++)
        {
            xx = search[i].first;
            yy = search[i].second;
            int x, y;
            if (xx <= c && yy <= d)
            {
                if (fd(xx, yy, NULL, x, y))
                {
                    cout << x << ' ' << y << endl;
                    flag = true;
                    break;
                }
            }
        }
        if (flag == false)
            cout << "-1 -1" << endl;
    }


    return 0;
}