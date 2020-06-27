/*
Problem 69: Sqrt(x)
https://leetcode.com/problems/sqrtx/submissions/
*/

//
// Solution 02: <-- Newton method
//
// Runtime: ~4 ms   (faster than 61.09% of C++ online submissions)
// Memory:  ~6.1 MB (less than 15.35% of C++ online submissions)
//

class Solution {
public:
    int mySqrt(int x) {
        long r = x;

        while (r * r > x)
            r = (r + x / r) / 2;

        return r;
    }
};