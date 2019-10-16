/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */
class Solution {
public:
    int max (int a,int b)
    {
        if(a>=b)
          return a;
        else
        {
            return b;
        }
        
    }
    
    int lengthOfLongestSubstring(string s) 
    {
        int i=0,j=0,k=0;
        string str ;
        while(i<s.size() && j<s.size())
        {
             if(str.find(s[j]) == str.npos)
             {
                 str.insert(str.end(),s[j]);
                 j++;
                 k = max(k,j-i);
             }
             else
             {
               str.erase(str.find(s[i]),1);
               i++;
             }
        
             
        }
     return k;
    }
        
};

