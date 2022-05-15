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
    int height =0;
    int maxSum =0;
    int maxHeight = Integer.MIN_VALUE;   
    public int deepestLeavesSum(TreeNode root) {
        DFS(root, height);
        return maxSum;
    }
    
    void DFS(TreeNode root, int height){
        if(root == null){
            return;
        }
        height++;
        DFS(root.left, height);
        if(root.left == null && root.right == null){
            if(maxHeight<height){
                maxHeight= height;
                maxSum = root.val;
            }
            else if(maxHeight == height){
                maxSum += root.val;
            }
        }
        DFS(root.right, height);
    }
}