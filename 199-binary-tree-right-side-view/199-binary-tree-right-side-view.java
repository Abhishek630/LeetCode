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
    // public void solve(TreeNode root, List<Integer>ans , int level){
    //     if(root == null){
    //         return;
    //     }
    //     if(level == ans.size()){
    //         ans.add(root.val);
    //     }
    //     solve(root.right,ans,level+1);
    //     solve(root.left,ans,level+1);
    // }
    
    public List<Integer> rightSideView(TreeNode root) {
        List<Integer> ans = new ArrayList<>();
        // solve(root, ans, 0);
        // return ans;
     if(root == null){
          return ans;
      }
      Queue<TreeNode>q=new LinkedList<TreeNode>();
      q.add(root);
      while(q.isEmpty()==false){
          int count = q.size();
          for(int i=0;i<count;i++){
              TreeNode curr = q.poll();
              if(i==count-1){
              // System.out.print(curr.data+" ");
                  ans.add(curr.val);
          }
          if(curr.left!=null){
              q.add(curr.left);
          }
          if(curr.right!=null){
              q.add(curr.right);
          }
          }
      }
        return ans;
    }
}