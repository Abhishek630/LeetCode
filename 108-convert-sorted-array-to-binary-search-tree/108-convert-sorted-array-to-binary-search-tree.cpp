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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        TreeNode * ans = solve(nums,0,n-1);
        return ans;
    }
    
    TreeNode* solve(vector<int>& nums, int s, int e){
        while(s<=e){
            int mid = s+(e-s)/2;
            
            TreeNode* root = new TreeNode(nums[mid]);
            root->left = solve(nums,s,mid-1);
            root->right = solve(nums,mid+1,e);
            return root;
        }
        return NULL;
    }
    
};