# Boolean Parenthesization
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a boolean expression <strong style="user-select: auto;">S</strong>&nbsp;of length <strong style="user-select: auto;">N</strong> with following symbols.<br style="user-select: auto;">
Symbols<br style="user-select: auto;">
&nbsp;&nbsp;&nbsp; 'T' ---&gt; true<br style="user-select: auto;">
&nbsp;&nbsp;&nbsp; 'F' ---&gt; false<br style="user-select: auto;">
and following operators filled between symbols<br style="user-select: auto;">
Operators<br style="user-select: auto;">
&nbsp;&nbsp;&nbsp; &amp;&nbsp;&nbsp; ---&gt; boolean AND<br style="user-select: auto;">
&nbsp;&nbsp;&nbsp; |&nbsp;&nbsp; ---&gt; boolean OR<br style="user-select: auto;">
&nbsp;&nbsp;&nbsp; ^&nbsp;&nbsp; ---&gt; boolean XOR<br style="user-select: auto;">
Count the number of ways we can parenthesize the expression so that the value of expression evaluates to true.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> N = 7
S = T|T&amp;F^T
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explaination:</strong> The expression evaluates 
to true in 4 ways ((T|T)&amp;(F^T)), 
(T|(T&amp;(F^T))), (((T|T)&amp;F)^T) and (T|((T&amp;F)^T)).</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> N = 5
S = T^F|F
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explaination:</strong> ((T^F)|F) and (T^(F|F)) are the 
only ways.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You do not need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">countWays()</strong> which takes N and S as input parameters and returns number of possible ways modulo 1003.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N<sup style="user-select: auto;">3</sup>)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(N<sup style="user-select: auto;">2</sup>)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 200&nbsp;</span></p>
 <p style="user-select: auto;"></p>
            </div>