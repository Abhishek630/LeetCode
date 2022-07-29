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
    string getDirections(TreeNode* root, int startValue, int destValue) {
        TreeNode* LCS = LCA(root , startValue , destValue);
        
        string sL , Ld;

        search(LCS , startValue,sL);
        search(LCS , destValue,Ld);
        
        for(int i=0;i<sL.size();i++) {
            sL[i] = 'U';
        }
        
        return sL+Ld;
    }
    
    TreeNode* LCA(TreeNode* root, int start , int dest){
        if(root == NULL||root->val == start || root->val == dest){
            return root;
        }
        
        TreeNode* left = LCA(root->left,start,dest);
        TreeNode* right = LCA(root->right,start,dest);
        
        if(left!= NULL && right!= NULL){
            return root;
        }
        if(left!= NULL && right == NULL){
            return left;
        }
        
        if(left == NULL && right!=NULL){
            return right;
        }
        return NULL;
    }
    
    bool search (TreeNode* root, int val, string &str){
        if(root == NULL){
            return false;
        }
        
        if(root->val == val){
            return true;
        }
        
        str.push_back('L');
        if(search(root->left,val,str)){
            return true;
        }
        str.pop_back();
        str.push_back('R');
        if(search(root->right,val,str)){
            return true;
        }
        str.pop_back();
        
        return false;
    }
};