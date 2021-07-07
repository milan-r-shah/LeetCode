/*
Problem 70. Climbing Stairs
https://leetcode.com/problems/climbing-stairs/
*/

//
// Solution 02: Dynamic Programming with Memoization
//

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;

        std::vector<int> cache(n + 1, -1);

        cache[1] = 1;
        cache[2] = 2;

        return climbStairs(n, cache);
    }

    int climbStairs(int n, std::vector<int> &cache) {
        if (cache[n] != -1)
            return cache[n];

        if (n - 1 >= 0)
            cache[n - 1] = climbStairs(n - 1, cache);

        if (n - 2 >= 0)
            cache[n - 2] = climbStairs(n - 2, cache);

        cache[n] = cache[n - 1] + cache[n - 2];

        return cache[n];
    }
};