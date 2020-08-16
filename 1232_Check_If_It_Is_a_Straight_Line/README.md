### LeetCode 
## Problem 1232: Check If It Is a Straight Line

https://leetcode.com/problems/climbing-stairs/

Difficulty: Easy

---

You are given an array `coordinates`, `coordinates[i] = [x, y]`, where `[x, y]` represents<br>the coordinate of a point. Check if these points make a straight line in the XY plane.

#### Example 1:

![image01](./data/images/image01.jpg "Straight Line")

<pre>
<b>Input:</b> coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
<b>Output:</b> true
</pre>

#### Example 2:

![image02](./data/images/image02.jpg "Not Straight Line")

<pre>
<b>Input:</b> coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
<b>Output:</b> false
</pre>

#### Constraints:

- `2 <= coordinates.length <= 1000`
- `coordinates[i].length == 2`
- `-10^4 <= coordinates[i][0], coordinates[i][1] <= 10^4`
- `coordinates` contains no duplicate point.

---

**Related Topics:** 
`Array`, `Math`, `Geometry`