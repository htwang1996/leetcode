/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 * 实现获取下一个排列函数，这个算法需要将数字重新排列成字典序中数字更大的排列。

如果不存在更大的排列，则重新将数字排列成最小的排列（即升序排列）。

修改必须是原地的，不开辟额外的内存空间。

这是一些例子，输入位于左侧列，其相应输出位于右侧列。

1,2,3 → 1,3,2
3,2,1 → 1,2,3
1,1,5 → 1,5,1
 */
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        next_permutation(nums.begin(),nums.end());
        
    }
};

