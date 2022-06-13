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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*, int>>q;
        q.push({root, 0});
        int first, last, width =0;
        while(!q.empty()){
            int size = q.size();
            int minn=q.front().second;
            for(int i=0; i<size;i++){
                pair<TreeNode*, int> front =q.front();
                q.pop();
                TreeNode* frontNode = front.first;
                long long int count = front.second;
                
                if(i==0){
                    first = count;
                }
                
                if(i==size-1){
                    last = count;
                }
                if(frontNode->left){
                    q.push({frontNode->left,2*count+1});
                }
                if(frontNode->right){
                    q.push({frontNode->right, 2*count+2});
                }
            }
            
            width = max(width,last-first+1);
        }
        return width;
    }
};