// 476. Number Complement.cpp : 定义控制台应用程序的入口点。
//https://leetcode.com/problems/number-complement/#/description

#include "stdafx.h"
#include<iostream>
using namespace std;

/*
思路：
先获取对应位数的掩码
通过把原来的数字右移直到0
掩码左移同样的次数

例子 5 0101
掩码一直左移到 1000
把结果掩码-1（1000-1=111）后与原来的数字取异或，得到最终结果
*/
int findComplement(int num) 
{
	int mask = 1;
	int t = num;
	while (t>0)
	{
		mask = mask << 1;
		t = t >> 1;
	}
	cout << mask << endl;
	return num^(mask-1);
}

int _tmain(int argc, _TCHAR* argv[])
{
	unsigned short a = 5;
	cout << findComplement(a) << endl;
	return 0;
}

