/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indice ;
        int flag = 0;
        for(int i = 0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                 if(nums[i]+nums[j] == target)
                  {
                      indice.push_back(i);
                      indice.push_back(j);
                      flag =1;
                      break;
                  }
            }
            if(flag == 1)
              break;
        }
        return indice;
    }
};

