<h2><a href="https://leetcode.com/problems/minimum-number-of-removals-to-make-mountain-array/">1671. Minimum Number of Removals to Make Mountain Array</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You may recall that an array <code style="user-select: auto;">arr</code> is a <strong style="user-select: auto;">mountain array</strong> if and only if:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">arr.length &gt;= 3</code></li>
	<li style="user-select: auto;">There exists some index <code style="user-select: auto;">i</code> (<strong style="user-select: auto;">0-indexed</strong>) with <code style="user-select: auto;">0 &lt; i &lt; arr.length - 1</code> such that:
	<ul style="user-select: auto;">
		<li style="user-select: auto;"><code style="user-select: auto;">arr[0] &lt; arr[1] &lt; ... &lt; arr[i - 1] &lt; arr[i]</code></li>
		<li style="user-select: auto;"><code style="user-select: auto;">arr[i] &gt; arr[i + 1] &gt; ... &gt; arr[arr.length - 1]</code></li>
	</ul>
	</li>
</ul>

<p style="user-select: auto;">Given an integer array <code style="user-select: auto;">nums</code>​​​, return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum</strong> number of elements to remove to make </em><code style="user-select: auto;">nums<em style="user-select: auto;">​​​</em></code><em style="user-select: auto;"> </em><em style="user-select: auto;">a <strong style="user-select: auto;">mountain array</strong>.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,3,1]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> The array itself is a mountain array so we do not need to remove any elements.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,1,1,5,6,2,3,1]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> One solution is to remove the elements at indices 0, 1, and 5, making the array nums = [1,5,6,3,1].
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">3 &lt;= nums.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;">It is guaranteed that you can make a mountain array out of <code style="user-select: auto;">nums</code>.</li>
</ul>
</div>