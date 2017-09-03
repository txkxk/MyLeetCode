// 637. Average of Levels in Binary Tree.cpp : 定义控制台应用程序的入口点。
//https://leetcode.com/problems/average-of-levels-in-binary-tree/#/description

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;


struct TreeNode 
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void traversal(TreeNode* root, vector<vector<int> >& vec,int level = 0)
{
	if (root==NULL)
	{
		return;
	}
	if (vec.size()<=level)
	{
		vec.push_back(vector<int>());
	}
	vec[level].push_back(root->val);
	traversal(root->left, vec, level + 1);
	traversal(root->right, vec, level + 1);
}

int _tmain(int argc, _TCHAR* argv[])
{
	vector<vector<int> > result;
	vector<double> v;
	//t1.val = 5;
	//traversal(&t1, result);
	for (int i = 0; i < result.size(); i++)
	{
		double sum = 0;
		for (int j = 0; j < result[i].size(); j++)
		{
			sum += result[i][j];
		}
		double average = sum / result[i].size();
		v.push_back(average);
	}


	return 0;
}

