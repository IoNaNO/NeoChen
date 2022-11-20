#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}

typedef long long ll;
class Solution
{
public:
    long long makeIntegerBeautiful(long long n, int target)
    {
        char nstr[13] = {0};
        sprintf(nstr, "%lld", n);
        string nsstr(nstr);
        cout<<"in:"<<nsstr<<endl;
        int ns = nsstr.size();
        int sum = 0;
        string ans;
        int endpow = 0;
        bool flag=false;
        for (int i = 0; i < nsstr.size(); i++)
        {
            sum += nsstr[i] - '0';
            if (sum > target)
            {
                sum-=nsstr[i] - '0';
                flag=true;
                endpow = ns - ans.size();
                break;
            }
            else
            {
                ans += nsstr[i];
            }
        }
        if(ans.empty())
        {
            ans="0";
        }
        cout<<"ans:"<<ans<<"sum:"<<sum<<endl;
        int i;
        if (flag)
        {
            for (i = ans.size() - 1; i >= 0; i--)
            {
                if (ans[i] == '9')
                {
                    ans[i] = '0';
                    sum-=9;
                    continue;
                }
                else
                {
                    ans[i]++;
                    sum++;
                    if(sum>target){
                        sum-=ans[i]-'0';
                        ans[i]='0';
                        cout<<"sum2:"<<sum<<endl;
                        continue;
                    }
                    break;
                }
            }
            if (i < 0&&ans[0]=='0')
            {
                ans.insert(ans.begin(), '1');
            }
        }
        ll res = 0;
        sscanf(ans.c_str(), "%lld", &res);
        cout << "res:" << res << endl;
        while (endpow--)
        {
            res *= 10;
        }
        return res - n;
    }
};