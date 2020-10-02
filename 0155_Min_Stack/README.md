### LeetCode 
## Problem 155: Min Stack

https://leetcode.com/problems/min-stack/

Difficulty: Easy

---

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

- push(x) -- Push element x onto stack.
- pop() -- Removes the element on top of the stack.
- top() -- Get the top element.
- getMin() -- Retrieve the minimum element in the stack.

#### Example 1:

<pre>
<b>Input</b>
["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],[-2],[0],[-3],[],[],[],[]]

<b>Output</b>
[null,null,null,null,-3,null,0,-2]

<b>Explanation</b>
MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin(); // return -3
minStack.pop();
minStack.top();    // return 0
minStack.getMin(); // return -2
</pre>

<br>

**Constraints:**

- Methods `pop`, `top` and `getMin` operations will always be called on **non-empty** stacks.

<br>

**Related Topics:** 
`Stack`, `Design`

---

**Useful Links:**
1. LeetCode 155. Min Stack (Algorithm Explained) - Nick White -- [video](https://youtu.be/WxCuL3jleUA)
2. C++ using two stacks, quite short and easy to understand -- [from LeetCode discussion](https://leetcode.com/problems/min-stack/discuss/49016/C%2B%2B-using-two-stacks-quite-short-and-easy-to-understand)