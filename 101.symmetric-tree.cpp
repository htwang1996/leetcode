/*
 * @lc app=leetcode id=101 lang=cpp
 *
 * [101] Symmetric Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL ){
            return true;
        }
        return isSymmetric(root->left,root->right);
        
    }
     bool isSymmetric(TreeNode* nodeleft,TreeNode* noderight) {
         if(nodeleft ==NULL && noderight == NULL){
             return true;
         }
         if (nodeleft && !noderight || !nodeleft && noderight || nodeleft->val != noderight->val) return false;
        return isSymmetric(nodeleft->left, noderight->right) && isSymmetric(nodeleft->right, noderight->left);
    }
};
// @lc code=end

