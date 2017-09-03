//https://leetcode.com/problems/optimal-division/description/
//这道题比较的具有欺诈性，要观察到规律，否则容易把问题复杂化
//由于格式为 a/b/c/d... a必定为被除数的一部分 b一定为除数的一部分，所以得到最大结果的算式为 a/(b/c/d)(把除数削到最小) == a*c*d/b(把被除数增到最大)
#include<vector>
#include<string>
#include<sstream>
#include<iostream>

using namespace std;

string IntToString(int num)
{
	stringstream ssr;
	ssr << num;
	return ssr.str();
}

string optimalDivision(vector<int>& nums) 
{
	string result = "";
	if (nums.size() == 1)
	{
		return result += IntToString(nums[0]);
	}
	else if (nums.size() == 2)
	{
		return result += (IntToString(nums[0]) + "/" + IntToString(nums[1]));
	}

	for (int i = 0; i < nums.size(); i++)
	{
		if (i == nums.size() - 1)
		{
			result += IntToString(nums[i]);
		}
		else
		{
			result += (IntToString(nums[i]) + "/");
		}
	}

	int firstindex = result.find_first_of('/');
	result.insert(firstindex + 1, "(");
	result.insert(result.size(), ")");

	return result;
}

int main()
{
	vector<int> vec = { 1000,100,10,2 };
	cout << optimalDivision(vec) << endl;
	system("pause");
	return 0;
}