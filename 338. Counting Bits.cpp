//https://leetcode.com/problems/counting-bits/description/

#include<iostream>
#include<vector>

using namespace std;

int BitCount(int num)
{
	int c = 0;
	for (; num; ++c)
	{
		num &= (num - 1);//清除最低位的1  详见：  http://www.cnblogs.com/graphics/archive/2010/06/21/1752421.html
	}
	
	return c;
}

vector<int> countBits(int num) {
	vector<int> result;
	for (int i = 0; i <= num; i++)
	{
		result.push_back(BitCount(i));
	}

	return result;
}

int main()
{
	countBits(5);
	int a;
	cin >> a;
}