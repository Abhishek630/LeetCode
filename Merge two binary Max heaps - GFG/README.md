# Merge two binary Max heaps
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two binary max heaps as arrays, merge the given heaps to form a new max heap.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input  :</strong> 
n = 4 m = 3
a[] = {10, 5, 6, 2}, 
b[] = {12, 7, 9}
<strong style="user-select: auto;">Output :</strong> 
{12, 10, 9, 2, 5, 7, 6}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation :</strong></span>

<input alt="" src="https://media.geeksforgeeks.org/wp-content/uploads/Merge_max_heap_1.jpg" style="height: 160px; width: 300px; user-select: auto;" type="image">
<input alt="" src="https://media.geeksforgeeks.org/wp-content/uploads/Merge_max_heap_2.jpg" style="height: 120px; width: 200px; user-select: auto;" type="image">
<span style="font-size: 18px; user-select: auto;"><input alt="" src="https://media.geeksforgeeks.org/wp-content/uploads/Merge_max_heap_3.jpg" style="height: 160px; width: 300px; user-select: auto;" type="image"></span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">mergeHeaps</strong><strong style="user-select: auto;">()</strong>&nbsp;which takes the array <strong style="user-select: auto;">a[]</strong>, <strong style="user-select: auto;">b[]</strong>, its size <strong style="user-select: auto;">n </strong>and <strong style="user-select: auto;">m,&nbsp;</strong>as inputs and return&nbsp;the merged max heap.&nbsp;Since there can be multiple solutions, therefore, to check for the correctness of your solution, your answer will be checked by the driver code and will return&nbsp;<strong style="user-select: auto;">1</strong>&nbsp;if it is correct, else it returns&nbsp;<strong style="user-select: auto;">0</strong>.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(n.Logn)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(n + m)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= n, m &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= a[i], b[i] &lt;= 2*10<sup style="user-select: auto;">5</sup></span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>