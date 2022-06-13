# Lowest Common Ancestor in a Binary Tree
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;">Given a Binary Tree with all <strong style="user-select: auto;">unique</strong> values and two nodes value,&nbsp;<strong style="user-select: auto;">n1</strong> and <strong style="user-select: auto;">n2</strong>. The task is to find the<strong style="user-select: auto;">&nbsp;lowest common ancestor</strong> of the given two nodes. We may assume that either both n1 and n2 are present in the tree or none of them are&nbsp;present. </span></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>n1 = 2 , n2 = 3  
&nbsp;      1 
&nbsp;     / \ 
&nbsp;    2   3
<strong style="user-select: auto;">Output: </strong><span style="font-family: arial, helvetica, sans-serif; user-select: auto;">1
</span><strong style="user-select: auto;">Explanation:
</strong></span><span style="font-size: 18px; user-select: auto;">LCA of 2 and 3 is 1.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>n1 = 3 , n2 = 4
           5    
      &nbsp;   /    
      &nbsp;  2  
      &nbsp; / \  
      &nbsp;3   4
<strong style="user-select: auto;">Output: </strong><span style="font-family: arial, helvetica, sans-serif; user-select: auto;">2
</span><strong style="user-select: auto;">Explanation:
</strong>LCA of 3 and 4 is 2.<strong style="user-select: auto;"> </strong></span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't have to read, input, or print anything. Your task is to complete the function <strong style="user-select: auto;">lca()&nbsp;</strong>that takes nodes, <strong style="user-select: auto;">n1, and n2</strong> as parameters and returns the&nbsp;<strong style="user-select: auto;">LCA </strong>node as output.&nbsp;</span></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>O(Height of Tree).</span></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ Number of nodes ≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 ≤ Data of a node ≤ 10<sup style="user-select: auto;">5</sup></span></span></p>
 <p style="user-select: auto;"></p>
            </div>