/*
 * @lc app=leetcode id=112 lang=cpp
 *
 * [112] Path Sum
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
    // int add = 0;
    // bool hasPathSum(TreeNode* root, int sum) {
    //      vector<int> res;
    //      int flag;
    //      ordertree(root,res);
    //      for(int i = 0;i<res.size();i++){
    //          if(res[i] == sum){
    //             flag =1;
    //          }
    //      }
    //      if(flag!=1){
    //         return false; 
    //      }
    //      return true;
         
        
    // }
    // void ordertree(TreeNode* root,vector<int>& res){
    //     if(root->left == nullptr && root->right == nullptr){
    //         res.push_back(add);
    //         add = add - (root->val);
    //         return ;
    //     }
    //     add = add + (root->val);
    //     ordertree(root->left,res);
    //     ordertree(root->right,res);
    // }
     bool hasPathSum(TreeNode *root, int sum) {
        if (root == NULL) return false;
        if (root->left == NULL && root->right == NULL && root->val == sum ) return true;
        return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
    }
};
// @lc code=end

