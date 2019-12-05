/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        int a =0;
        for(int i = 0;i<size;i++){
           a = a + digits[i] * pow(10,size-i-1);
        }
        a = a+1;
        int b =a;
        int count = 0;
        while(a)
        {
            a/=10;
            count++;
        }
        vector<int> plus;
        for(int i = 0;i<count;i++){
            plus.push_back(int(b/pow(10,count-i-1))%10);
        }
        return plus;
    }
};

