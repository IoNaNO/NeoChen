#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string oddString(vector<string> &words)
    {
        int n = words[0].size();
        map<string, int> tool;
        string ori;
        for (auto &str : words)
        {
            string key = "a";
            for (int i = 1; i < n; i++)
            {
                char diff = str[i] - str[i - 1];
                key += ('a' + diff);
            }

            tool[key]++;
            if (tool[key] == 2)
            {
                ori = key;
            }
            if (key != ori)
            {
                return str;
            }
        }
        string str = words[0];
        string key = "a";
        for (int i = 1; i < n; i++)
        {
            char diff = str[i] - str[i - 1];
            key += ('a' + diff);
        }
        if (key != ori)
        {
            return words[0];
        }
        else
        {
            return words[1];
        }

        return words[0];
    }
};