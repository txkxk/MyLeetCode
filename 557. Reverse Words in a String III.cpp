// 557. Reverse Words in a String III.cpp : 定义控制台应用程序的入口点。
//https://leetcode.com/problems/reverse-words-in-a-string-iii/#/description
//此题比较简单，主要考察对迭代器的应用

#include "stdafx.h"
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

string reverseWords(string s) {
	string result;
	string::iterator tmp = s.begin();
	for (string::iterator it = s.begin(); it != s.end(); it++)
	{
		if (*it == ' ')
		{
			reverse(tmp, it);
			tmp = it;
			tmp++;
		}
		else if (it + 1 == s.end())
		{
			reverse(tmp, s.end());
		}
	}
	return s;
}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << reverseWords("Let's take LeetCode contest") << endl;
	return 0;
}

