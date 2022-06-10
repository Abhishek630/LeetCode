# Sum of dependencies in a graph
## Easy
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a directed graph with V&nbsp;nodes and E edges. If there is an edge from u to v then u depends on v. Find out the sum of dependencies for every node. Duplicate edges should be counted as separate&nbsp;edges.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
V=4
E=4
Edges={ {0,2},{0,3},{1,3},{2,3} }
</span>

<span style="font-size: 18px; user-select: auto;"><img alt="" src="https://contribute.geeksforgeeks.org/wp-content/uploads/tree-6.png" style="height: 234px; width: 211px; user-select: auto;" class="img-responsive"></span>

<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong>
4
<strong style="user-select: auto;">Explanation:</strong>
For the graph in diagram, A depends
on C and D i.e. 2, B depends on D i.e.
1, C depends on D i.e. 1
and D depends on none.
Hence answer -&gt; 0 + 1 + 1 + 2 = 4</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
V=4
E=3
Edges={ {0,3},{0,2},{0,1} }
<strong style="user-select: auto;">Output:</strong>
3
<strong style="user-select: auto;">Explanation:</strong>
The sum of dependencies=3+0+0+0=3.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything.Your task is to complete the function <strong style="user-select: auto;">sumOfDependencies()</strong> which takes the adj (Adjacency list) and V (Number of nodes)as input parameters and returns the total sum of dependencies of all nodes.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>O(V)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxillary Space:</strong>O(1)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;=V,E&lt;=150</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">0&lt;= Edges[i][0],Edges[i][1] &lt;= V-1</span></p>
 <p style="user-select: auto;"></p>
            </div>