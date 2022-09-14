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
    int ans;
public:
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int>p(10,0);
        ans =0;
        solve(root, p);
        return ans;
    }
    
    void solve(TreeNode* root, vector<int> pp){
        if(root == NULL){
            return;
        }
        pp[root->val]++;
        
        if(root->left== NULL && root->right==NULL){
            int  odd =0;
            for(auto x:pp){
                if(x%2!=0){
                    odd++;
                }
            }
            if(odd<=1){
                ans++;
            }
            return;
        }
        solve(root->right, pp);
        solve(root->left,pp);
    }
};