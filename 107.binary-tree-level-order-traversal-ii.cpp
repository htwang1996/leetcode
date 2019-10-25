/*
 * @lc app=leetcode id=107 lang=cpp
 *
 * [107] Binary Tree Level Order Traversal II
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> levelnode;
        if(!root){
            return levelnode;
        }
        queue<TreeNode*> node;
        node.push(root);
       // int j = 0;
        while(!node.empty()){
            vector<int> level;
            for(int i= node.size();i>0;--i){
 
                if(node.front()->left){
                    node.push(node.front()->left);
                }
                if(node.front()->right){
                    node.push(node.front()->right);
                }
                level.push_back(node.front()->val);
                node.pop();
            }
            levelnode.push_back(level);
            
        }
        reverse(levelnode.begin(),levelnode.end());
        return levelnode;
        
    }

};
// @lc code=end

