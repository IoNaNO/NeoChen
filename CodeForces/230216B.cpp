#include<bits/stdc++.h>
using namespace std;


struct TreeNode {
  int val;
	struct TreeNode *left;
    struct TreeNode *right;
};

class Solution {
public:
    /**
     * 
     * @param root1 TreeNode类 
     * @param root2 TreeNode类 
     * @return bool布尔型
     */
    bool isSame(TreeNode* root1, TreeNode* root2) {
        // write code here
        if(!root1&&!root2){
            return true;
        }
        if(!root1||!root2){
            return false;
        }
        if(root1->val!=root2->val){
            return false;
        }
        return isSame(root1->left,root2->left) && isSame(root1->right,root2->right);
    }

    bool isContains(TreeNode* root1, TreeNode* root2) {
        // write code here
        if(!root1){
            return false;
        }
        if(isSame(root1,root2)){
            return true;
        }

        return isContains(root1->left,root2)||isContains(root1->right,root2);
    }

};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    return 0;
}