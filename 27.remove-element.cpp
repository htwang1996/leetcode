/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int t = 0;
        if(size == 0){
            return 0;
        }
        int count = 0;
        for(int i = 0;i < size;i++){
            if (nums[i] == val ){
                count++;
            }
        }
        for(int i = 0;i < (size-count);i++){
            if (nums[i] == val ){
                for(int j = size-1;j>i;j--){
                    if(nums[j] != val){
                        t = nums[j];
                        nums[j] = nums[i];
                        nums[i] = t;
                        break;
                    }
                }
            }
        }                    
        return (size-count);
        
    }
};
// @lc code=end

