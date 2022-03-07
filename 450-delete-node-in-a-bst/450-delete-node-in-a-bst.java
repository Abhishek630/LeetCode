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
    public TreeNode deleteNode(TreeNode root, int key) {
        
        if (root == null) {
            return null;
        }
        
        if (root.val > key) {
            root.left = deleteNode(root.left, key);
        }
        else if (root.val < key) {
            root.right = deleteNode(root.right, key);
        }
        else {
            if (root.left == null) return root.right;
            if (root.right == null) return root.left;
            
            // having two children, find leftmost node in right subtree
            TreeNode minNode = getMin(root.right);
        
            // will return current root.right if root.right is not the only node in the right subtree
            root.right = deleteNode(root.right, minNode.val); 
            minNode.left = root.left;
            minNode.right = root.right;
            root = minNode;
        }
        
        return root;
    }
    
    public TreeNode getMin(TreeNode node) {
        while (node.left != null) node = node.left;
        return node;
    }
   
}