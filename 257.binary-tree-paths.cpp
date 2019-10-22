/*
 * @lc app=leetcode id=257 lang=cpp
 *
 * [257] Binary Tree Paths
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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> path;
        string s ;
        if(root)
             ordertree(root,path,s);
        return path;
    }
    void ordertree(TreeNode* root,vector<string>& path,string s){
        if(!root->left && !root->right){
            path.push_back(s+std::to_string(root->val));
            return ;
        }
        s = s + std::to_string(root->val)+"->";
        if(root->left)
            ordertree(root->left,path,s);
        if(root->right)
            ordertree(root->right,path,s);

    }
};
// class Solution {
// public:
//     vector<string> binaryTreePaths(TreeNode* root) {
//         vector<string> res;
//         if (root) helper(root, "", res);
//         return res;
//     }
//     void helper(TreeNode* node, string out, vector<string>& res) {
//         if (!node->left && !node->right) res.push_back(out + to_string(node->val));
//         if (node->left) helper(node->left, out + to_string(node->val) + "->", res);
//         if (node->right) helper(node->right, out + to_string(node->val) + "->", res);
//     }
// };
// @lc code=end

