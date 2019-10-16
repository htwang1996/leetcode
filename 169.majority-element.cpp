/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        map<int,int> map1;
        
        for(int i = 0;i < size;i++)
        {
            map1[nums[i]]++;
        }
        int majorele = 0;
        int max = 0;
        for(map<int,int>::iterator ite = map1.begin();ite != map1.end();ite++)
        {
            if(ite->second > max )
            {
                majorele = ite->first;
                max = ite->second;
            }
            
        }
        return majorele;
    }
};

