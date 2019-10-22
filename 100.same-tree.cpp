/*
 * @lc app=leetcode id=100 lang=cpp
 *
 * [100] Same Tree
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> v1;
        vector<int> v2;
        orderTree(p,v1); 
        orderTree(q,v2); 
        if(v1 != v2 ){
            return false;
        }
            
        return true;
    }

    void orderTree(TreeNode* p,vector<int> &res){
        if(!p){
            res.push_back(-1);
            return ;
        }  
        res.push_back(p->val);
        orderTree(p->left,res);
        orderTree(p->right,res);
    }
};
// @lc code=end

