/*
 * @lc app=leetcode id=102 lang=cpp
 *
 * [102] Binary Tree Level Order Traversal
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
    vector<vector<int>> levelOrder(TreeNode* root) {
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
                //levelnode[j].resize(node.size());
                // if(!node.front()->left && !node.front()->right){reference binding to null pointer of type 'struct value_type'
                //     node.pop();
                // }
                if(node.front()->left){
                    node.push(node.front()->left);
                }
                if(node.front()->right){
                    node.push(node.front()->right);
                }
                //levelnode[j].push_back(node.front()->val);
                level.push_back(node.front()->val);
                node.pop();
            }
            levelnode.push_back(level);
        }
        return levelnode;
        
    }

};
