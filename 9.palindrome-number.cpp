/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */
class Solution {
public:
    bool isPalindrome(int x) {
         stringstream ss;
         ss<<x;
         string   s=ss.str(); 
        //size_t len = ;
         int count = 0;
        for(int i = 0,j = s.size() -1 ;i<j;i++,j--)
        {
            if(s[i] == s[j])
            {
                count ++;
            }
            else
            {
                return false;
            }
            if (count == s.size()/2)
               return true;
            
        }
        return true;
            
    }
};

