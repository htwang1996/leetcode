/*
 * @lc app=leetcode id=501 lang=cpp
 *
 * [501] Find Mode in Binary Search Tree
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
    vector<int> findMode(TreeNode* root) {
        vector<int> a;
        TreeNode* temp = root;
        while(temp != nullptr){
            temp = temp->left;
            a.push_back(temp->val);
            temp = temp->right;
            a.push_back(temp->val);

        }
        
        
        return a;
        
    }
};
// @lc code=end

