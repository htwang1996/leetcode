/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpre,tmp_delta,tmp_max = 0;
        int k =0;
        if(prices.empty())
           return k;
        int tmp_minnum = prices[0];
        for(int i =0;i < prices.size();i++)
        {
            int b = prices[i];
            tmp_delta = b-tmp_minnum;
            if( tmp_delta > 0)
            {
                if(tmp_delta > tmp_max)
                {  
                    tmp_max = tmp_delta;
                }
                    
            }
            else 
                tmp_minnum = prices[i];
                

        }
        
        return tmp_max;   
    }
};

