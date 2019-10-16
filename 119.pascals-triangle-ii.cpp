/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<vector<int>> triangle;
        for(int i = 0; i < 34;i++)
        {
            triangle.push_back(vector<int> (i+1,1));
        }
        if(1)
        {
            for(int i =2;i<34;i++)
            {
                for(int j =1; j<=ceil(i/2);j++)
                {
                     triangle[i][j] = triangle[i-1][j-1]+ triangle[i-1][j];
                     triangle[i][i-j] = triangle[i-1][j-1]+ triangle[i-1][j];
                }
                    
            }
        }

        return triangle[rowIndex];
        
    }
};

