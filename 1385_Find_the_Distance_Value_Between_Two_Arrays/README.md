### LeetCode 
## Problem 1385: Find the Distance Value Between Two Arrays

https://leetcode.com/problems/find-the-distance-value-between-two-arrays/

Difficulty: Easy

---

Given two integer arrays ```arr1``` and ```arr2```, and the integer ```d```, *return the distance value between the two arrays*.

The distance value is defined as the number of elements ```arr1[i]``` such that there is not any element ```arr2[j]``` where ```|arr1[i]-arr2[j]| <= d```.

#### Example 1:

<pre>
<b>Input:</b> arr1 = [4,5,8], arr2 = [10,9,1,8], d = 2
<b>Output:</b> 2
<b>Explanation:</b>
For arr1[0]=4 we have: 
|4-10|=6 > d=2 
|4-9|=5 > d=2 
|4-1|=3 > d=2 
|4-8|=4 > d=2 
For arr1[1]=5 we have: 
|5-10|=5 > d=2 
|5-9|=4 > d=2 
|5-1|=4 > d=2 
|5-8|=3 > d=2
For arr1[2]=8 we have:
<b>|8-10|=2 <= d=2 </b>
<b>|8-9|=1 <= d=2 </b>
|8-1|=7 > d=2
<b>|8-8|=0 <= d=2 </b>
</pre>

#### Example 2:

<pre>
<b>Input:</b> arr1 = [1,4,2,3], arr2 = [-4,-3,6,10,20,30], d = 3
<b>Output:</b> 2
</pre>

#### Example 3:

<pre>
<b>Input:</b> arr1 = [2,1,100,3], arr2 = [-5,-2,10,-3,7], d = 6
<b>Output:</b> 1
</pre>

#### Constraints:

* ```1 <= arr1.length, arr2.length <= 500```
* ```-10^3 <= arr1[i], arr2[j] <= 10^3```
* ```0 <= d <= 100```


---

**Related Topics:** 
```Array```