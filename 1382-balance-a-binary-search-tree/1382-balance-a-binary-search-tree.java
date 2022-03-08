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
    public void inorder(TreeNode root, ArrayList<Integer>in){
        if(root == null){
            return;
        }
        inorder(root.left,in);
        in.add(root.val);
        inorder(root.right, in);
    }
    public TreeNode inorderToBST(int start, int end ,ArrayList<Integer>in){
        int n = in.size();
        if(start>end){
          return null;  
        }
        else{
            int mid = (start+end)/2;
            TreeNode root = new TreeNode(in.get(mid));
            root.left=inorderToBST(start,mid-1,in);
            root.right=inorderToBST(mid+1,end,in);
            return root;
        }
    }
    
    public TreeNode balanceBST(TreeNode root) {
        ArrayList<Integer> in = new ArrayList<Integer>();
        inorder(root, in);
        int n = in.size();
        return inorderToBST(0,n-1,in);
    }
}