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
    TreeNode* pruneTree(TreeNode* root) {
        bool ans = solve(root);
        if(!ans){
            return NULL;
        }
        return root;
    }
    
    bool solve(TreeNode* root){
        if(root == NULL){
            return false;
        }
        
        bool left = solve(root->left);
        bool right = solve(root->right);
        
        if(left == false){
            root->left = NULL;
        }
        if(right == false){
            root->right = NULL;
        }
        
        if(left == false && right == false && root->val ==0){
            return false;
        }
        return true;
        
    }
};