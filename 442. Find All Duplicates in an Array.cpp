//https://leetcode.com/problems/find-all-duplicates-in-an-array/description/
#include<iostream>
#include<vector>
#include<map>

using namespace std;
//最暴力的解法
vector<int> findDuplicates(vector<int>& nums) {
	map<int, int> m;
	vector<int> result;
	for (int i = 0; i < nums.size(); i++)
	{
		m[nums[i]]++;
	}

	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		if (it->second > 1)
		{
			result.push_back(it->first);
		}
	}

	return result;
}

int main()
{
	vector<int> v = { 4,3,2,7,8,2,3,1 };
	auto r = findDuplicates(v);
	for (int i = 0; i < r.size(); i++)
	{
		cout << r[i] << endl;
	}
	int a;
	cin >> a;
	return 0;
}