// 575. Distribute Candies.cpp : 定义控制台应用程序的入口点。
//https://leetcode.com/problems/distribute-candies/#/description

#include "stdafx.h"
#include<set>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;
//此题比较简单，判断妹妹分得的个数与种类个数，返回更小者
int distributeCandies(vector<int>& candies) {
	set<int> s;
	int candiesSize = candies.size();
	for (int i = 0; i < candiesSize; i++)
	{
		s.insert(candies[i]);
	}
	int sisterCount = candiesSize / 2;
	int typeCount = s.size();
	return min(sisterCount, typeCount);
}

int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> vec = { 1, 1, 2, 3 };
	cout << distributeCandies(vec) << endl;
	
	return 0;
}

