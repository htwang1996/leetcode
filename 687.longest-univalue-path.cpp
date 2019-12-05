/*
 * @lc app=leetcode id=687 lang=cpp
 *
 * [687] Longest Univalue Path
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
    int longestUnivaluePath(TreeNode* root) {
        if(!root){
            return 0;
        }
        int res = 0;
        dfs(root,res);
        return res;
    }
    int dfs(TreeNode* root,int &res){
        if(!root){
            return 0;
        }
        int l = dfs(root->left,res);
        int r = dfs(root->right,res);
        int l_res = root->left && root->left->val == root->val ? l+1 : 0;
        int r_res = root->right && root->right->val == root->val ? r+1 : 0;
        res = max(res,l_res+r_res);
        return max(l_res,r_res);
    }
};
// @lc code=end

