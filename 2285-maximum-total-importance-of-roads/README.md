<h2><a href="https://leetcode.com/problems/maximum-total-importance-of-roads/">2285. Maximum Total Importance of Roads</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer <code style="user-select: auto;">n</code> denoting the number of cities in a country. The cities are numbered from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code>.</p>

<p style="user-select: auto;">You are also given a 2D integer array <code style="user-select: auto;">roads</code> where <code style="user-select: auto;">roads[i] = [a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub>]</code> denotes that there exists a <strong style="user-select: auto;">bidirectional</strong> road connecting cities <code style="user-select: auto;">a<sub style="user-select: auto;">i</sub></code> and <code style="user-select: auto;">b<sub style="user-select: auto;">i</sub></code>.</p>

<p style="user-select: auto;">You need to assign each city with an integer value from <code style="user-select: auto;">1</code> to <code style="user-select: auto;">n</code>, where each value can only be used <strong style="user-select: auto;">once</strong>. The <strong style="user-select: auto;">importance</strong> of a road is then defined as the <strong style="user-select: auto;">sum</strong> of the values of the two cities it connects.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum total importance</strong> of all roads possible after assigning the values optimally.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/04/07/ex1drawio.png" style="width: 290px; height: 215px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 5, roads = [[0,1],[1,2],[2,3],[0,2],[1,3],[2,4]]
<strong style="user-select: auto;">Output:</strong> 43
<strong style="user-select: auto;">Explanation:</strong> The figure above shows the country and the assigned values of [2,4,5,3,1].
- The road (0,1) has an importance of 2 + 4 = 6.
- The road (1,2) has an importance of 4 + 5 = 9.
- The road (2,3) has an importance of 5 + 3 = 8.
- The road (0,2) has an importance of 2 + 5 = 7.
- The road (1,3) has an importance of 4 + 3 = 7.
- The road (2,4) has an importance of 5 + 1 = 6.
The total importance of all roads is 6 + 9 + 8 + 7 + 7 + 6 = 43.
It can be shown that we cannot obtain a greater total importance than 43.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/04/07/ex2drawio.png" style="width: 281px; height: 151px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 5, roads = [[0,3],[2,4],[1,3]]
<strong style="user-select: auto;">Output:</strong> 20
<strong style="user-select: auto;">Explanation:</strong> The figure above shows the country and the assigned values of [4,3,2,5,1].
- The road (0,3) has an importance of 4 + 5 = 9.
- The road (2,4) has an importance of 2 + 1 = 3.
- The road (1,3) has an importance of 3 + 5 = 8.
The total importance of all roads is 9 + 3 + 8 = 20.
It can be shown that we cannot obtain a greater total importance than 20.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= roads.length &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">roads[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub> &lt;= n - 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">a<sub style="user-select: auto;">i</sub> != b<sub style="user-select: auto;">i</sub></code></li>
	<li style="user-select: auto;">There are no duplicate roads.</li>
</ul>
</div>