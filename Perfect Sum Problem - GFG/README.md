# Perfect Sum Problem
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">arr[]</strong> of integers and an integer <strong style="user-select: auto;">sum</strong>, the task is to count&nbsp;all subsets of the given array with a sum equal to a given <strong style="user-select: auto;">sum</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Note: Answer can be very large, so, output answer modulo 10<sup style="user-select: auto;">9</sup>+7</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: N = 6, arr[] = {2, 3, 5, 6, 8, 10}
       sum = 10
<strong style="user-select: auto;">Output:</strong> 3</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation</strong>: {2, 3, 5}, {2, 8}, {10}</span></pre>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></div>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: N = 5, arr[] = {1, 2, 3, 4, 5}
       sum = 10
<strong style="user-select: auto;">Output:</strong> 3</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation</strong>: {1, 2, 3, 4}, {1, 4, 5}, 
             {2, 3, 5}</span></pre>

<div style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Complete the function <strong style="user-select: auto;"><code style="user-select: auto;">perfectSum</code>()&nbsp;</strong>which takes <strong style="user-select: auto;">N, </strong>array<strong style="user-select: auto;"> arr[]</strong> and <strong style="user-select: auto;">sum </strong>as input parameters and returns an integer value<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Time Complexity:</strong> O(<strong style="user-select: auto;">N*sum</strong>)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(<strong style="user-select: auto;">N*sum</strong>)<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ <strong style="user-select: auto;">N*sum</strong> ≤ 10<sup style="user-select: auto;">6</sup></span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">0&lt;=arr[I]&lt;=10<sup style="user-select: auto;">6</sup></span></div>
 <p style="user-select: auto;"></p>
            </div>