/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {
       unordered_set<int> s;
       
       while(n != 1){
           int sum = 0;
           while(n){
                sum += (n%10)*(n%10);
                n = n/10;
            }
            n = sum;
            if(s.count(n)){
                break;
            }
            s.insert(n);
       }
       return n ==1;
    }
};
// @lc code=end

