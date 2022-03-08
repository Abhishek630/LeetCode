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
    int i = 0;
    public TreeNode solve(int[] preorder, int maxi){
        if(i>= preorder.length){
            return null;
        }
        if(preorder[this.i]>maxi){
            return null;
        }
        TreeNode root = new TreeNode(preorder[this.i++]);
        root.left = solve(preorder,root.val);
        root.right = solve(preorder,maxi);
        return root;
    }
    
    public TreeNode bstFromPreorder(int[] preorder) {
        int maxi = Integer.MAX_VALUE;
        
        return solve(preorder,maxi);
    }
}