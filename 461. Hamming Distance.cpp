/*461. Hamming Distance
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers x and y, calculate the Hamming distance.

Note:
0 ≤ x, y < 231.

Example:

Input: x = 1, y = 4

Output: 2

Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑

The above arrows point to positions where the corresponding bits are different.
*/
class Solution {
public:
    int hammingDistance(int x, int y) 
    {
        vector<int> x_two = ten2two(x);
        vector<int> y_two = ten2two(y);
        int count = 0;
        for(size_t i =0;i<x_two.size();i++)
        {
            if(x_two[i]!=y_two[i])
              count++;
        }
        return count;
        
    }
    vector<int> ten2two(int x)
    {   
        vector<int> two;
        int z =31;
        while(x)
        {
            two.push_back(x%2);
            x/=2;
        }
        if(two.size()<32)
            for(int i = two.size();i<32;i++)
                two.push_back(0);
        return two;
    }
};