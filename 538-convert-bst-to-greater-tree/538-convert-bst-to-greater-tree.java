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
    int sum =0;
    public TreeNode convertBST(TreeNode root) {
        
        if (root == null)
            return null;
			convertBST(root.right);////go till end of right subtree to find max val
        //increase this node by accumulated sum so far, then add this node to the sum
        int t = root.val;
        root.val+=sum;
        sum += t;
        convertBST(root.left);//go in the left subtree to update the sum
        return root;
    }
}