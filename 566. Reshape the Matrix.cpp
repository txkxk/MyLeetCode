//https://leetcode.com/problems/reshape-the-matrix/description/

#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
	if (r*c != nums.size()*nums[0].size())
	{
		return nums;
	}

	vector<int> elements;

	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = 0; j < nums[i].size(); j++)
		{
			elements.push_back(nums[i][j]);
		}
	}

	vector<vector<int>> result;
	int idx = 0;
	for (int i = 0; i < r; i++)
	{
		result.push_back(vector<int>());
		for (int j = 0; j < c; j++)
		{
			result[i].push_back(elements[idx]);
			idx++;
		}
	}

	return result;
}

int main()
{
	vector<vector<int>> p =
	{
		{1,2,3,4}
	};

	vector<vector<int>> r = matrixReshape(p, 2, 2);
	for (int i = 0; i < r.size(); i++)
	{
		for (int j = 0; j < r[i].size(); j++)
		{
			cout << r[i][j] << " ";
		}
		cout << endl;
	}

	int a;
	cin >> a;

	return 0;
}