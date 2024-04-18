// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
//  /*
// Method 1: Perform Inorder Traversal and stroe values in VEctor. kth samllest is found at kTh position or  k-1 index
// similarly Kth largest found from last i.e,, n-k index ;
// TIME COMPLEXITY =O(N) and SC=o(n) so we use below which takes TC=O(k)
//  */
class Solution {
public:

    int kthSmallest(TreeNode* root, int k) {
        int res=-1;
        int count=0;
        helper(root,k,count,res);
        return res;
    
    }
    void helper(TreeNode*root,int k,int &count,int &res){
            if(!root)return;
            helper(root->left,k,count,res);
            count++;
            if(k==count){
                res=root->val;
                return;
            }
            helper(root->right,k,count,res);
    }

};