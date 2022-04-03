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
    public List<List<Integer>> levelOrderBottom(TreeNode root) {
         List<List<Integer>> result = new ArrayList<List<Integer>>();
        if(root ==null){return result;}
        Queue<TreeNode> queue = new LinkedList<TreeNode>();
        queue.add(root);
        while(!queue.isEmpty()){
            int levelNum = queue.size();
            List<Integer> levelList = new ArrayList<Integer>();
            for(int i=0;i<levelNum;i++){
                TreeNode cur = queue.poll();
                levelList.add(cur.val);
                if(cur.left != null){
                    queue.add(cur.left);
                }
                if(cur.right !=null){
                    queue.add(cur.right);
                }
            }
            result.add(0,levelList);//to insert with reversing
        }
        return result;
    }
}