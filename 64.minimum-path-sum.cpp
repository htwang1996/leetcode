/*
 * @lc app=leetcode id=64 lang=cpp
 *
 * [64] Minimum Path Sum
 */

// @lc code=start
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int  m = grid.size();
        int  n = grid[0].size();
        if(m == 0 || n == 0){
            return 0;
        }
        vector<vector<int>> minnm(m,vector<int>(n));
        minnm[m-1][n-1] = grid[m-1][n-1];
        for(int k = m-2;k >= 0;k--){
            minnm[k][n-1] = grid[k][n-1] + minnm[k+1][n-1];
        }
        for(int l = n-2;l >= 0;l--){
            minnm[m-1][l] = grid[m-1][l] + minnm[m-1][l+1];
        }
        for(int i = m -2;i>=0;i--){
            for (int j = n-2;j >= 0;j--){
                minnm[i][j] = grid[i][j] +min(minnm[i+1][j],minnm[i][j+1]);
            }
        }
        return minnm[0][0];        
    }
};
// @lc code=end

