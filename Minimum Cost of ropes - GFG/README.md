# Minimum Cost of ropes
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">There are given <strong style="user-select: auto;">N</strong> ropes of different lengths, we need to connect these ropes into one rope. The cost to connect two ropes is equal to sum of their lengths. The task is to connect the ropes with minimum cost.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>n = 4
arr[] = {4, 3, 2, 6}
<strong style="user-select: auto;">Output: 
</strong>29<strong style="user-select: auto;">
Explanation:
</strong>For example if we are given 4
ropes of lengths 4, 3, 2 and 6. We can
connect the ropes in following ways.
1) First connect ropes of lengths 2 and 3.
Now we have three ropes of lengths 4, 6
and 5.
2) Now connect ropes of lengths 4 and 5.
Now we have two ropes of lengths 6 and 9.
3) Finally connect the two ropes and all
ropes have connected.
Total cost for connecting all ropes is 5
+ 9 + 15 = 29. This is the optimized cost
for connecting ropes. Other ways of
connecting ropes would always have same
or more cost. For example, if we connect
4 and 6 first (we get three strings of 3,
2 and 10), then connect 10 and 3 (we get
two strings of 13 and 2). Finally we
connect 13 and 2. Total cost in this way
is 10 + 13 + 15 = 38.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>n = 5
arr[] = {4, 2, 7, 6, 9}
<strong style="user-select: auto;">Output: 
</strong>62 
<strong style="user-select: auto;">Explanation:</strong>
First, connect ropes 4 and 2, which makes
the array {6,7,6,9}. Next, add ropes 6 and
6, which results in {12,7,9}. Then, add 7
and 9, which makes the array {12,16}. And
finally add these two which gives {28}.
Hence, the total cost is 6 + 12 + 16 + 
28 = 62.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task isto complete the&nbsp;function&nbsp;<strong style="user-select: auto;">minCost()</strong> which takes 2&nbsp;arguments and returns the minimum cost.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong> : O(nlogn)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxilliary Space</strong> : O(n)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 ≤ N ≤ 100000<br style="user-select: auto;">
1 ≤ arr[i] ≤ 10<sup style="user-select: auto;">6</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>