//https://leetcode.com/problems/find-bottom-left-tree-value/description/
//思路 层级遍历后取最后一级的第一个节点，由于只要第一个节点，其实可以有很多优化的地方，但是复习一下层级遍历，还是做了完整的层级遍历
#include<vector>
#include<iostream>

using namespace std;


struct TreeNode 
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct ListNode
{
	TreeNode* node;
	ListNode* next;
};

void traversal(TreeNode* root, int depth, vector<ListNode*> &vec)
{
	if (root == NULL)
	{
		return;
	}
	if (depth == vec.size())//这一层的第一个节点
	{
		ListNode *LN = new ListNode();
		LN->node = root;
		LN->next = NULL;
		vec.push_back(LN);
		traversal(root->left, depth + 1, vec);
		traversal(root->right, depth + 1, vec);
	}
	else//不是这一层的第一个节点
	{
		ListNode *LN = new ListNode();
		LN->node = root;
		LN->next = NULL;
		vec[vec.size() - 1]->next = LN;
		traversal(root->left, depth + 1, vec);
		traversal(root->right, depth + 1, vec);
	}
}

int findBottomLeftValue(TreeNode* root) 
{
	vector<ListNode*> vec;
	traversal(root, 0, vec);
	ListNode* head = vec[vec.size() - 1];

	return head->node->val;
}

int main()
{
	
}