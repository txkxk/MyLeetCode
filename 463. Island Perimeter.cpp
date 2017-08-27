//https://leetcode.com/problems/island-perimeter/description/
#include<iostream>
#include<vector>

using namespace std;
//PS：注意考虑{{1}}这种特殊情况
int getPointLineNum(vector<vector<int>>& grid, int i, int j)
{
	int result = 0;
	if (j - 1 >= 0 && grid[i][j - 1] == 0)//左
	{
		result++;
	}

	if (j + 1 < grid[i].size() && grid[i][j + 1] == 0)//右
	{ 
		result++;
	}

	if (j - 1 < 0)//最左边
	{
		result++;
	}
	if (j + 1 >= grid[i].size())//最右边
	{
		result++;
	}


	if (i - 1 >= 0 && grid[i - 1][j] == 0)//上
	{
		result++;
	}

	if (i + 1 < grid.size() && grid[i + 1][j] == 0)//下
	{
		result++;
	}

	if (i - 1 < 0)//最上边
	{
		result++;
	}
	if (i + 1 >= grid.size())//最下边
	{
		result++;
	}

	return result;
}

int islandPerimeter(vector<vector<int>>& grid) {
	int sum = 0;
	for (int i = 0; i < grid.size(); i++)
	{
		for (int j = 0; j < grid[i].size(); j++)
		{
			if (grid[i][j] ==1)
				sum += getPointLineNum(grid, i, j);
		}
	}

	return sum;
}

int main()
{
	vector<vector<int>> vec =
	{
		{ 0,1,0,0 },
		{ 1,1,1,0 },
		{ 0,1,0,0 },
		{ 1,1,0,0 },

	};
	//vector<vector<int>> vec =
	//{
	//	{1}
	//};
	int r = islandPerimeter(vec);
	cout << r << endl;

	int a;
	cin >> a;
	return 0;
}