// 561. Array Partition I.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<vector>
#include<algorithm>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> vec;
	sort(vec.begin(),vec.end());

	int sum = 0;
	for (int i = 0; i < vec.size(); i += 2)
	{
		sum += vec[i];
	}

	return 0;
}

