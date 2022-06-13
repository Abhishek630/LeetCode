/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int solve(TreeNode*root,int &f)
	{
		if(root==NULL)
			return 0;
		int lh=solve(root->left,f);
		int rh=solve(root->right,f);
		if(abs(lh-rh)>1)
			f=0;
		return max(lh,rh)+1;
	}
	bool isBalanced(TreeNode* root) {
		int f=1;
		solve(root,f);
		return f;    
	}
};