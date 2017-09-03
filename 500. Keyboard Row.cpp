// 500. Keyboard Row.cpp : 定义控制台应用程序的入口点。
//https://leetcode.com/problems/keyboard-row/#/description
//此题很简单，只要对比字符串中每个字符在kb里的索引是否都是同一行即可
#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

const vector<string> kb =
{
	"~`1!2@3#4$5%6^7&8*9(0)-_=+",
	 "qwertyuiop[]\QWERTYUIOP{}|" ,
	"asdfghjkl;'ASDFGHJKL:\"" ,
	 "zxcvbnm,./ZXCVBNM<>?" 
};

bool checkStrting(string &s)
{
	int kbidx = -1;

	for (int i = 0; i < s.size(); i++)
	{
		for (int j = 0; j < kb.size(); j++)
		{
			int idx = kb[j].find(s[i]);
			if (idx == -1)
			{
				continue;
			}

			if (kbidx == -1)
			{
				kbidx = j;
			}
			else if (kbidx != j)
			{
				return false;
			}
		}
	}
}

vector<string> findWords(vector<string>& words) 
{
	vector<string> result;

	for (int i = 0; i < words.size(); i++)
	{
		if (checkStrting(words[i]))
		{
			result.push_back(words[i]);
		}
	}

	return result;
}

int _tmain(int argc, _TCHAR* argv[])
{ 
	vector<string> test = { "Hello", "Alaska", "Dad", "Peace" };
	auto r = findWords(test);
	for (auto &s : r)
	{
		cout << s << endl;
	}
	return 0;
}

