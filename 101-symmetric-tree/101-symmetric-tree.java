/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean isSymmetric(TreeNode root) {
        if(root == null){
            return true;
        }
        
        return isSame(root.left, root.right);
    }
    
    
    public boolean isSame(TreeNode p, TreeNode q){
        
        if(p==null && q== null){
            return true;
        }
        
        if(p==null && q!= null){
            return false;
        }
        
        if(p!=null && q== null){
            return false;
        }
        
        boolean left = isSame(p.left,q.right);
        boolean right = isSame(p.right,q.left);
        boolean value = p.val == q.val;
        
        if(left && right && value){
            return true;
        }
        
        // if(p!=null && q!=null && p.val == q.val){
        //     return true;
        // }
        return false;
    }
}