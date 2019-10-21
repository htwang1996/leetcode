/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        std::vector<int> num(n);
        num[0] = 1;
        num[1] = 2;
        for(int i = 2;i < n; i++){
            num[i] = num[i-1]+num[i-2];
        }
        return num[n-1];
    }
};
// @lc code=end

