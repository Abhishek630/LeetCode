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
    
    
    void traverse(TreeNode* root , int t , vector<vector<int>>& res , vector<int> path , int sum) {
        
        if(root == NULL)
            return;
        
        if(root->left == NULL && root->right == NULL) {
            if(sum + root->val == t) {
                path.push_back(root->val);
                res.push_back(path);
            }
            return;
        }
    
        path.push_back(root->val);
        
        traverse(root->left , t , res , path , sum + root->val);
            
        traverse(root->right , t , res , path , sum + root->val);
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        
        vector<int> path;
        
        traverse(root , targetSum , res , path , 0);
        
        return res;
    }
};