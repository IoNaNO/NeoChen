/**
  * @file    :221113C.cpp
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

/**
 * Definition for a binary tree node.*/
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
class Solution {
public:
    int minimumOperations(TreeNode* root) {
        vector<TreeNode*> que;
        vector<vector<int>> t;
        que.push_back(root);
        vector<int> t0(1);
        t.push_back(t0);
        int depth=0;
        int i=0;
        int nl=0;
        while(que.empty()==false){
            TreeNode* p=que.front();
            que.erase(que.begin());

            t[depth][i++]=p->val;
            if(i==t[depth].size()){
                depth++;
                vector<int> ti(nl);
                t.push_back(ti);
                nl=0;
                i=0;
            }

            if(p->left)
            { 
                nl++;
                que.push_back(p->left);
            }
            if(p->right)
            {
                nl++;
                que.push_back(p->right);
        
            }
        }
    }
};