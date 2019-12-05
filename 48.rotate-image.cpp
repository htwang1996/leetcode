/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        if(m == 0){
            return ; 
        }
        int tmpt1,tmpt2,tmpt3;
        for(int i = 0;i<floor(n/2);i++){
            for(int j = i;j < n-i-1;j++){
                tmpt1 = matrix[j][i];
                tmpt2 = matrix[i][m-j-1];
                tmpt3 = matrix[n-j-1][m-i-1];
                matrix[j][i] = matrix[n-i-1][j];
                matrix[i][m-j-1] = tmpt1;
                matrix[n-j-1][m-i-1] = tmpt2;
                matrix[m-i-1][j] = tmpt3;
            }
        }
    }
};
// @lc code=end

