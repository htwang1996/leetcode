// /*
//  * @lc app=leetcode id=15 lang=cpp
//  *
//  * [15] 3Sum
//  */
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        //set<set<int> > trip_s;
        vector<vector<int> > trip_v1;
        //vector<vector<int>> trip_v2;
        vector<int>  trip_vv(3);
        int sum;
        for(int i =0 ;i<nums.size()-2;i++)
        {
            int left = i+1, right = nums.size() - 1;
            sum = 0 - nums[i];
            //trip_vv.push_back(nums[i]);
            while(left < right)
             {
                int temp = nums[left] + nums[right];
                if(temp > sum)
                    {
                    right--;
                    }
                else if(temp < sum)
                    {
                    left++;
                    }
                else
                    {  
                    // trip_v1[i].push_back(nums[i]);
                    // trip_v1[i].push_back(nums[left + 1]);
                    // trip_v1[i].push_back(nums[right + 1]);
                    
                    trip_vv[0] = nums[i];
                    trip_vv[1] = nums[left++];
                    trip_vv[2] = nums[right--];
                    trip_v1.push_back(trip_vv);
                    while(left < right && nums[left] == nums[left-1])
                     left++; 
                    while(left < right && nums[right] == nums[right+1]) 
                    right--;

                    }
             }
             while(i < nums.size()-2 && nums[i+1] == nums[i])
               i++;
        }
        return  trip_v1;
    }
};

// class Solution{
// public:
//     vector< vector<int> > threeSum(vector<int> &num) {
//         vector<int> numSet(3);
//         vector< vector<int> > r;
//         // 1.排序
//         sort(num.begin(), num.end());
//         int sum;
//         int len = num.size();
//         // 2.拿出第一个数，转化为两数和问题。注意外层循环到倒数第三个数即可
//         for(int i = 0; i < len-2; i++) {
//             sum = 0 - num[i];
//             numSet[0] = num[i];
//             // 3.两数和问题
//             for(int j = i+1, k = len-1; j < k;) {
//                 if(num[j] + num[k] == sum) {
//                     numSet[1] = num[j++];
//                     numSet[2] = num[k--];
//                     r.push_back(numSet);
//                     // 根据题目要求，跳过重复元素
//                     while(j < k && num[j] == num[j-1]) 
//                         j++;
//                     while(j < k && num[k] == num[k+1])
//                         k--;
//                 }
//                 else if(num[j] + num[k] < sum)
//                     j++;
//                 else 
//                     k--;
//             }
//             while(i < len-2 && num[i+1] == num[i])
//                 i++;
//         }
//         return r;
//     }
// };


