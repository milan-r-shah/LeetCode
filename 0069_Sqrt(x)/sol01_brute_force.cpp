/*
Problem 69: Sqrt(x)
https://leetcode.com/problems/sqrtx/submissions/
*/

//
// Solution 01: <-- Brute force
//
// Runtime: ~20 ms  (faster than 11.80% of C++ online submissions)
// Memory:  ~5.9 MB (less than 72.10% of C++ online submissions)
//

class Solution {
public:
    int mySqrt(int x) {
        long int n = 0;

        while (n * n <= x)
            n++;

        return --n;
    }
};