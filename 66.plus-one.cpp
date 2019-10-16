/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> plus = digits;
        int size = digits.size();
        if(plus(size-1) != 9)
        {
            plus(size-1) += 1;
        }
        else
        {
            plus(size-2) += 1;
            plus(size-1) = 0;
        }
        
        
    }
};

