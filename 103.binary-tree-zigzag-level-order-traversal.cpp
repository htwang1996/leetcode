/*
 * @lc app=leetcode id=103 lang=cpp
 *
 * [103] Binary Tree Zigzag Level Order Traversal
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> levelnode;
        if(!root){
            return levelnode;
        }
        queue<TreeNode*> node;
        node.push(root);
        int j = 0;
        while(!node.empty()){
            vector<int> level;
        //    if(j%2){
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
         //   }
            // else{
            //     for(int i= node.size();i>0;--i){
            //         if(node.front()->right){
            //             node.push(node.front()->right);
            //         }
            //         if(node.front()->left){
            //             node.push(node.front()->left);
            //         }
            //         level.push_back(node.front()->val);
            //         node.pop();
            //    } 

            // }
            if(j%2 == 1) {
                reverse(level.begin(),level.end());
            }
            levelnode.push_back(level);
            j++;
            
        }
        return levelnode;
        
    }
};
// @lc code=end

