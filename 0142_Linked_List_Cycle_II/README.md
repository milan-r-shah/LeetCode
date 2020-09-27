### LeetCode 
## Problem 142: Linked List Cycle II

https://leetcode.com/problems/linked-list-cycle-ii/

Difficulty: Medium

---

Given a linked list, return the node where the cycle begins. If there is no cycle, return `null`.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously <br>
following the `next` pointer. Internally, `pos` is used to denote the index of the node that tail's `next` pointer <br>
is connected to. **Note that `pos` is not passed as a parameter**.

**Notice** that you **should not modify** the linked list.

**Follow up:**

Can you solve it using `O(1)` (i.e. constant) memory?

<br>

#### Example 1:

```
   ( 3 )--->( 2 )--->( 0 )--->( -4 )---.
              ^                        |
              |________________________|
```

<pre>
<b>Input:</b> head = [3,2,0,-4], pos = 1
<b>Output:</b> tail connects to node index 1
<b>Explanation:</b> There is a cycle in the linked list, where tail connects to the second node.
</pre>

#### Example 2:

```
   ( 1 )--->( 2 )---.
     ^              |
     |______________|
```

<pre>
<b>Input:</b> head = [1,2], pos = 0
<b>Output:</b> tail connects to node index 0
<b>Explanation:</b> There is a cycle in the linked list, where tail connects to the first node.
</pre>

#### Example 3:

```
   ( 1 )
```

<pre>
<b>Input:</b> head = [1], pos = -1
<b>Output:</b> no cycle
<b>Explanation:</b> There is no cycle in the linked list.
</pre>

**Constraints:**

- The number of the nodes in the list is in the range `[0, 10^4]`.
- `-10^5 <= Node.val <= 10^5`
- `pos` is `-1` or a **valid index** in the linked-list.

<br>

**Related Topics:** 
`Linked List`, `Two Pointers`

---

**Useful Links:**
1. Detect loop in linked list(floyd algo / Tortoise and hare algo) -- [video](https://youtu.be/zbozWoMgKW0)
2. Why Floyd's cycle detection algorithm works? Detecting loop in a linked list. -- [video](https://youtu.be/LUm2ABqAs1w)