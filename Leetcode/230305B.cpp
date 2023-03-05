#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

typedef long long ll;
class Solution
{
public:
    long long kthLargestLevelSum(TreeNode *root, int k)
    {
        vector<ll> lsum;
        vector<TreeNode *> S;
        vector<TreeNode *> nS;
        TreeNode *p = root;
        S.push_back(root);
        ll sum = 0;
        while (!S.empty())
        {
            p = S.back();
            S.pop_back();
            if (p)
            {
                nS.push_back(p->left);
                nS.push_back(p->right);
                sum += p->val;
            }
            if (S.empty())
            {
                if (sum)
                {
                    lsum.push_back(sum);
                }
                sum = 0;
                S.assign(nS.begin(), nS.end());
                nS.clear();
            }
        }

        // cout<<"lsum:";
        // for(auto i:lsum){
        //     cout<<i<<' ';
        // }
        // cout<<endl;

        sort(lsum.rbegin(), lsum.rend());
        if (k > lsum.size())
        {
            return -1;
        }
        else
        {
            return lsum[k - 1];
        }
    }
};