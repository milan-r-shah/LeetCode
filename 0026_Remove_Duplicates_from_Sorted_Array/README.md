### LeetCode 
## Problem 26: Remove Duplicates from Sorted Array

https://leetcode.com/problems/remove-duplicates-from-sorted-array/

Difficulty: Easy

---

Given a sorted array nums, remove the duplicates [in-place](https://en.wikipedia.org/wiki/In-place_algorithm) such that each element appear only <i>once</i> <br>and return the new length.

Do not allocate extra space for another array, you must do this by **modifying the input array** [in-place](https://en.wikipedia.org/wiki/In-place_algorithm) <br>with O(1) extra memory.

#### Example 1:

<pre>
Given nums = <b>[1,1,2]</b>,

Your function should return length = <b>2</b>, with the first two elements of <i>nums</i> 
being <b>1</b> and <b>2</b> respectively.

It doesn't matter what you leave beyond the returned length.
</pre>

#### Example 2:

<pre>
Given nums = <b>[0,0,1,1,1,2,2,3,3,4]</b>,

Your function should return length = <b>5</b>, with the first five elements of <i>nums</i> 
being modified to <b>0</b>, <b>1</b>, <b>2</b>, <b>3</b>, and <b>4</b> respectively.

It doesn't matter what values are set beyond the returned length.
</pre>

#### Clarification:

Confused why the returned value is an integer but your answer is an array?

Note that the input array is passed in by **reference**, which means modification to the input array will be<br>known to the caller as well.

Internally you can think of this:

<pre>
// <b>nums</b> is passed in by reference. (i.e., without making a copy)
int len = removeDuplicates(nums);

// any modification to <b>nums</b> in your function would be known by the caller.
// using the length returned by your function, it prints the first <b>len</b> elements.
for (int i = 0; i < len; i++) {
    print(nums[i]);
}
</pre>
---

**Related Topics:** 
`Array`, `Two Pointers`