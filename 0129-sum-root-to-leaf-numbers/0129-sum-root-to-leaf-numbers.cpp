/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumNumbers(TreeNode* root) {
        return dfs(root,0);
       
    }
    int dfs(TreeNode*root,int ps){
      //ps=pathSUM
      if(!root)return 0;
      ps=10*ps+root->val;
        if(!root->left && !root->right)return ps;
        int left=dfs(root->left,ps);
        int right=dfs(root->right,ps);
        return left+right;
    }
};