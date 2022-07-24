<h2><a href="https://leetcode.com/problems/equal-row-and-column-pairs/">2352. Equal Row and Column Pairs</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a <strong style="user-select: auto;">0-indexed</strong> <code style="user-select: auto;">n x n</code> integer matrix <code style="user-select: auto;">grid</code>, <em style="user-select: auto;">return the number of pairs </em><code style="user-select: auto;">(R<sub style="user-select: auto;">i</sub>, C<sub style="user-select: auto;">j</sub>)</code><em style="user-select: auto;"> such that row </em><code style="user-select: auto;">R<sub style="user-select: auto;">i</sub></code><em style="user-select: auto;"> and column </em><code style="user-select: auto;">C<sub style="user-select: auto;">j</sub></code><em style="user-select: auto;"> are equal</em>.</p>

<p style="user-select: auto;">A row and column pair is considered equal if they contain the same elements in the same order (i.e. an equal array).</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/06/01/ex1.jpg" style="width: 150px; height: 153px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[3,2,1],[1,7,6],[2,7,7]]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> There is 1 equal row and column pair:
- (Row 2, Column 1): [2,7,7]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/06/01/ex2.jpg" style="width: 200px; height: 209px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[3,1,2,2],[1,4,4,5],[2,4,2,2],[2,4,2,2]]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> There are 3 equal row and column pairs:
- (Row 0, Column 0): [3,1,2,2]
- (Row 2, Column 2): [2,4,2,2]
- (Row 3, Column 2): [2,4,2,2]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == grid.length == grid[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 200</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= grid[i][j] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>