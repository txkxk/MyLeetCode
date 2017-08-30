//https://leetcode.com/problems/average-of-levels-in-binary-tree/description/

#include<iostream>
#include<vector>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct ListNode
{
	int val;
	ListNode* next;
};

void traversal(TreeNode *root, int depth, vector<ListNode*>& v)
{
	if (root == NULL)
	{
		return;
	}

	if (depth == v.size())
	{
		ListNode* ln = new ListNode();
		ln->val = root->val;
		ln->next = NULL;
		v.push_back(ln);
		traversal(root->left, depth + 1, v);
		traversal(root->right, depth + 1, v);
	}
	else
	{
		ListNode* ln = new ListNode();
		ln->val = root->val;
		ln->next = NULL;
		ListNode* head = v[depth];
		while (head->next)
		{
			head = head->next;
		}
		head->next = ln;
		traversal(root->left, depth + 1, v);
		traversal(root->right, depth + 1, v);
	}
}

vector<double> averageOfLevels(TreeNode* root) {
	vector<ListNode*> v;

	traversal(root, 0, v);

	vector<double> result;
	for (int i = 0; i < v.size(); i++)
	{
		double count = 0.0;
		double sum = 0.0;
		ListNode* head = v[i];
		while (head)
		{
			sum += head->val;
			count++;
			head = head->next;
		}
		result.push_back(sum / count);
	}

	return result;
}

int main()
{

}