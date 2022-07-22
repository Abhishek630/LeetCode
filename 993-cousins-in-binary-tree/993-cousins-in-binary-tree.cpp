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
    bool isCousins(TreeNode* root, int x, int y) {
        unordered_map<int , pair<int , int>> map; //val -> {depth , parent}
        traverse(root , x , y , map , -1 , 0);
        
        if ((map[x].first == map[y].first && map[x].second != map[y].second) && (map[x].second != -1 || map[y].second != -1))         {
            return true;
        }
        return false;
    }
    
    void traverse(TreeNode* root , int x , int y , unordered_map<int , pair<int , int>>& map , int par , int dep) {
        if (root == NULL)
            return;
        
        
        if (root->val == x || root->val == y) {
            map[root->val]  = {dep , par};
        }
        
        traverse(root->left , x , y , map , root->val , dep+1);
        traverse(root->right , x , y , map , root->val , dep+1);
    }
//     bool isCousins(TreeNode* root, int x, int y) {
//         unordered_map<int, pair<int, int>> map;
//         traverse(root,map, -1,0,x,y);
    
//     if((map[x].first==map[y].first && map[x].second!= map[y].second) && (map[x].second!=1 &&map[y].second!=-1)){
//         return true;
//     }
//     return false;
// }
    
//     void traverse(TreeNode* root,unordered_map<int, pair<int, int>> &map, int par, int depth, int x, int y ){
//         if(root == NULL){
//             return;
//         }
        
//         if(root->val ==x || root->val ==y){
//             map[root->val]={depth,par};
//         }
        
//         traverse(root->left,map,root->val,depth+1,x,y);
//         traverse(root->right,map,root->val,depth+1,x,y);
//     }
};