/*883. Projection Area of 3D Shapes
On a N * N grid, we place some 1 * 1 * 1 cubes that are axis-aligned with the x, y, and z axes.

Each value v = grid[i][j] represents a tower of v cubes placed on top of grid cell (i, j).

Now we view the projection of these cubes onto the xy, yz, and zx planes.

A projection is like a shadow, that maps our 3 dimensional figure to a 2 dimensional plane. 

Here, we are viewing the "shadow" when looking at the cubes from the top, the front, and the side.

Return the total area of all three projections.

 

Example 1:

Input: [[2]]
Output: 5

Example 2:

Input: [[1,2],[3,4]]
Output: 17
Explanation: 
Here are the three projections ("shadows") of the shape made with each axis-aligned plane.

Example 3:

Input: [[1,0],[0,2]]
Output: 8

Example 4:

Input: [[1,1,1],[1,0,1],[1,1,1]]
Output: 14

Example 5:

Input: [[2,2,2],[2,1,2],[2,2,2]]
Output: 21

 

Note:

    1 <= grid.length = grid[0].length <= 50
    0 <= grid[i][j] <= 50

*/
class Solution {
public:
	int projectionArea(vector<vector<int>>& grid) {
		int a, b, c, d;
		a = rightmax(grid);
		b = backmax(grid);
		c = overtmax(grid);
		d = a + b + c;
		return d;
	}
	int rightmax(const vector<vector<int>>& grid) //返回 每列的最大值
	{
		vector<int> back(grid[0].size());
		int count_right = 0;
		for (int i = 0; i < grid[0].size(); i++)
		{
			for (int j = 0; j < grid.size(); j++)
				if (grid[j][i] > back[i])
					back[i] = grid[j][i];
		}
		for (int j = 0; j < back.size(); j++)
			count_right += back[j];
		return count_right;
	}
	int backmax(const vector<vector<int>>& grid) //返回 每行最大值
	{
		vector<int> back(grid.size());
		int count_back = 0;
		for (int i = 0; i < grid.size(); i++)
		{
			for (int j = 0; j < grid[0].size(); j++)
				if (grid[i][j] > back[i])
					back[i] = grid[i][j];
		}
		for (int j = 0; j < back.size(); j++)
			count_back += back[j];
		return count_back;
	}
	int overtmax(const vector<vector<int>>& grid) //返回 每行的最大值
	{
		int count_over = 0;
		for (int i = 0; i < grid.size(); i++)
		{
			for (int j = 0; j < grid[0].size(); j++)
				if (grid[i][j] >0)
					count_over++;
		}
		return count_over;
	}
};