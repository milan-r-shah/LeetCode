### LeetCode 
## Problem 997: Find the Town Judge

https://leetcode.com/problems/find-the-town-judge/

Difficulty: Easy

---

In a town, there are `N` people labelled from `1` to `N`.  There is a rumor that one of these people is<br>secretly the town judge.

If the town judge exists, then:

1. The town judge trusts nobody.
2. Everybody (except for the town judge) trusts the town judge.
3. There is exactly one person that satisfies properties 1 and 2.

You are given `trust`, an array of pairs `trust[i] = [a, b]` representing that the person labelled<br>`a` trusts the person labelled `b`.

If the town judge exists and can be identified, return the label of the town judge.  Otherwise, return `-1`.

#### Example 1:

<pre>
<b>Input:</b> N = 2, trust = [[1,2]]
<b>Output:</b> 2
</pre>

#### Example 2:

<pre>
<b>Input:</b> N = 3, trust = [[1,3],[2,3]]
<b>Output:</b> 3
</pre>

#### Example 3:

<pre>
<b>Input:</b> N = 3, trust = [[1,3],[2,3],[3,1]]
<b>Output:</b> -1
</pre>

#### Example 4:

<pre>
<b>Input:</b> N = 3, trust = [[1,2],[2,3]]
<b>Output:</b> -1
</pre>

#### Example 5:

<pre>
<b>Input:</b> N = 4, trust = [[1,3],[1,4],[2,3],[2,4],[4,3]]
<b>Output:</b> 3
</pre>

#### Constraints:

- `1 <= N <= 1000`
- `0 <= trust.length <= 10^4`
- `trust[i].length == 2`
- `trust[i] are all different`
- `trust[i][0] != trust[i][1]`
- `1 <= trust[i][0], trust[i][1] <= N`

---

**Related Topics:** 
`Graph`