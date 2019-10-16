/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        for(int i = 0; i < numRows;i++)
        {
            triangle.push_back(vector<int> (i+1,1));
        }
        if(numRows > 2)
        {
            for(int i =2;i<numRows;i++)
            {
                for(int j =1; j<=ceil(i/2);j++)
                {
                     triangle[i][j] = triangle[i-1][j-1]+ triangle[i-1][j];
                     triangle[i][i-j] = triangle[i-1][j-1]+ triangle[i-1][j];
                }
                    
            }
        }

        return triangle;
    }
};

