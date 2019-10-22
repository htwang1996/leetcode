/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0){
            return false;
        }
        int m = matrix.size();
        int n = matrix[0].size();
        int row = 0;
        int col = n-1;
        while(row < m && col>=0){
            if(matrix[row][col] == target){
                return true;
            }
            else if(matrix[row][col] > target){
                col--;
            }
            else {
                row++;
            }
        }
        return false;
    }
};
// @lc code=end

