### LeetCode 
## Problem 27: Remove Element

https://leetcode.com/problems/remove-element/

Difficulty: Easy

---

Given an array *nums* and a value *val*, remove all instances of that value [in-place](https://en.wikipedia.org/wiki/In-place_algorithm) and return the new length.

Do not allocate extra space for another array, you must do this by **modifying the input array** [in-place](https://en.wikipedia.org/wiki/In-place_algorithm) with<br>O(1) extra memory.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.

#### Example 1:

<pre>
Given <i>nums</i> = <b>[3,2,2,3]</b>, <i>val</i> = <b>3</b>,

Your function should return length = <b>2</b>, with the first two elements of nums being <b>2</b>.

It doesn't matter what you leave beyond the returned length.
</pre>

#### Example 2:

<pre>
Given <i>nums</i> = <b>[0,1,2,2,3,0,4,2]</b>, <i>val</i> = <b>2</b>,

Your function should return length = <b>5</b>, with the first five elements of nums 
containing <b>0</b>, <b>1</b>, <b>3</b>, <b>0</b>, and <b>4</b>.

Note that the order of those five elements can be arbitrary.

It doesn't matter what values are set beyond the returned length.
</pre>

#### Clarification:

Confused why the returned value is an integer but your answer is an array?

Note that the input array is passed in by **reference**, which means modification to the input array will be<br>known to the caller as well.

Internally you can think of this:

<pre>
// <b>nums</b> is passed in by reference. (i.e., without making a copy)
int len = removeElement(nums, val);

// any modification to <b>nums</b> in your function would be known by the caller.
// using the length returned by your function, it prints the first <b>len</b> elements.
for (int i = 0; i < len; i++) {
    print(nums[i]);
}
</pre>
---

**Related Topics:** 
`Array`, `Two Pointers`