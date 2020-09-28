### LeetCode 
## Problem 295: Find Median from Data Stream

https://leetcode.com/problems/find-median-from-data-stream/

Difficulty: Hard

---

Median is the middle value in an ordered integer list. If the size of the list is even, there is no middle <br>
value. So the median is the mean of the two middle value.

For example,<br>
`[2,3,4]`, the median is `3`

`[2,3]`, the median is `(2 + 3) / 2 = 2.5`

Design a data structure that supports the following two operations:

- void addNum(int num) - Add a integer number from the data stream to the data structure.
- double findMedian() - Return the median of all elements so far.

<br>

#### Example:

<pre>
addNum(1)
addNum(2)
findMedian() -> 1.5
addNum(3) 
findMedian() -> 2
</pre>

<br>

**Follow up:**

1. If all integer numbers from the stream are between 0 and 100, how would you optimize it?
2. If 99% of all integer numbers from the stream are between 0 and 100, how would you optimize it?

<br>

**Related Topics:** 
`Heap`, `Design`

---

**Useful Links:**
1. Median of stream of running integers | Heaps, Priority Queues Application | Explanation from Basics -- [video](https://youtu.be/EcNbRjEcb14)