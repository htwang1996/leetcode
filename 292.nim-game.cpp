/*
 * @lc app=leetcode id=292 lang=cpp
 *
 * [292] Nim Game
 */
class Solution {
public:
    bool canWinNim(int n) {
        if(n<4)
          return true;
        else if (!(n%4))
          return false;
        else 
          return true;
        
        
    }
};

