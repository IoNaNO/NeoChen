/**
  * @file    :221120B.cpp
  * @brief   :6242. 二叉搜索树最近节点查询
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-11-20
  */

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    return 0;
}

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
    void inorder(vector<int>&t,TreeNode* node){
        if(!node){
            return;
        }
        inorder(t,node->left);
        t.push_back(node->val);
        inorder(t,node->right);
    }
    int findmin(vector<int>&t,int&m){
        int l=0;
        int r=t.size()-1;
        int tar=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(t[mid]>m){
                r=mid-1;
            }
            else{
                tar=mid;
                l=mid+1;
            }
        }
        return tar;
    }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        vector<vector<int>> res;
        vector<int> t;
        inorder(t,root);
        for(auto&m:queries){
            auto itmin=findmin(t,m);
            auto itmax=lower_bound(t.begin(),t.end(),m);
            int min,max;
            if(itmin!=-1){
                min=t[itmin];
            }
            else{
                min=-1;
            }
            if(itmax!=t.end()){
                max=*itmax;
            }
            else{
                max=-1;
            }
            res.push_back({min,max});
        }
        return res;
    }
};