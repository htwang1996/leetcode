/*
 * @lc app=leetcode id=322 lang=cpp
 *
 * [322] Coin Change
 */
class Solution {
public:
    
    int coinChange(vector<int>& coins, int amount) {
        if(coins.empty() || amount == 0)
           return 0;
        sort(coins.begin(),coins.end());
        if(coins[0] > amount){
            return -1;
        }       
        int size = coins.size();
        vector<vector<int>> dp;
        dp.resize(size,vector<int>(amount+1,0x7ffffff));
        for(int i = 0;i<size;i++){
            dp[i][0] = 0;
        }
        //  coin[0] 的n次倍赋值为n，其余为inf
        for(int j = 1;j <amount+1;j++){
           if (j - coins[0] >= 0){
                dp[0][j] = min(dp[0][j - coins[0]] + 1, dp[0][j]);
           } 
        }
          
        for (int i = 1;i<size;i++){
            for(int j = 1;j <amount+1;j++){
                if(j-coins[i]>=0){
                    //
                    dp[i][j] = min(dp[i-1][j],dp[i][j-coins[i]]+1);
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
     return dp[size-1][amount] >= 0x7ffffff ? -1 : dp[size-1][amount];
        
    }
};

