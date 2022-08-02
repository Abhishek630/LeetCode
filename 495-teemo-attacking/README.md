<h2><a href="https://leetcode.com/problems/teemo-attacking/">495. Teemo Attacking</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Our hero Teemo is attacking an enemy Ashe with poison attacks! When Teemo attacks Ashe, Ashe gets poisoned for a exactly <code style="user-select: auto;">duration</code> seconds. More formally, an attack at second <code style="user-select: auto;">t</code> will mean Ashe is poisoned during the <strong style="user-select: auto;">inclusive</strong> time interval <code style="user-select: auto;">[t, t + duration - 1]</code>. If Teemo attacks again <strong style="user-select: auto;">before</strong> the poison effect ends, the timer for it is <strong style="user-select: auto;">reset</strong>, and the poison effect will end <code style="user-select: auto;">duration</code> seconds after the new attack.</p>

<p style="user-select: auto;">You are given a <strong style="user-select: auto;">non-decreasing</strong> integer array <code style="user-select: auto;">timeSeries</code>, where <code style="user-select: auto;">timeSeries[i]</code> denotes that Teemo attacks Ashe at second <code style="user-select: auto;">timeSeries[i]</code>, and an integer <code style="user-select: auto;">duration</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">total</strong> number of seconds that Ashe is poisoned</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> timeSeries = [1,4], duration = 2
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> Teemo's attacks on Ashe go as follows:
- At second 1, Teemo attacks, and Ashe is poisoned for seconds 1 and 2.
- At second 4, Teemo attacks, and Ashe is poisoned for seconds 4 and 5.
Ashe is poisoned for seconds 1, 2, 4, and 5, which is 4 seconds in total.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> timeSeries = [1,2], duration = 2
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> Teemo's attacks on Ashe go as follows:
- At second 1, Teemo attacks, and Ashe is poisoned for seconds 1 and 2.
- At second 2 however, Teemo attacks again and resets the poison timer. Ashe is poisoned for seconds 2 and 3.
Ashe is poisoned for seconds 1, 2, and 3, which is 3 seconds in total.</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= timeSeries.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= timeSeries[i], duration &lt;= 10<sup style="user-select: auto;">7</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">timeSeries</code> is sorted in <strong style="user-select: auto;">non-decreasing</strong> order.</li>
</ul>
</div>