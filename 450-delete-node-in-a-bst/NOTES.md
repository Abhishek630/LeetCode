public TreeNode minValue(TreeNode node){
if(node.left!=null){
node= node.left;
}
return node;
}
public TreeNode delete(TreeNode root, int key){
if(root.left == null && root.right == null){
return null;
}
else if(root.left != null && root.right == null){
return root.left;
}
else if(root.left == null && root.right != null){
return root.right;
}
else{
TreeNode mini = minValue(root.right);
root.right =deleteNode(root.right,mini.val);
mini.left =root.left;
mini.right= root.right;
root = mini;
}
return root;
}
public TreeNode deleteNode(TreeNode root, int key) {
if(root == null){
return root;
}
if(root.val == key){
delete(root,key);
}
else if(root.val>key){
root.left = deleteNode(root.left,key);
return root;
}
else{
root.right = deleteNode(root.right,key);
return root;
}
return null;
}