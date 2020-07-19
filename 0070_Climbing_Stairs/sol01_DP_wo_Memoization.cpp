/*
Problem 70. Climbing Stairs
https://leetcode.com/problems/climbing-stairs/
*/

//
// Solution 01: Dynamic Programming without Memoization
// 
// As this solution doesn't use Memorization, it works fine for smaller 'n'
// But, upon submission, it gives "Time Limit Exceeded" error because of 
// too many recursive calls.
//

class Solution {
public:
    int climbStairs(int n) {
        if (n == 0)
            return 1;

        int combinations = 0;

        if (n - 1 >= 0)
            combinations += climbStairs(n - 1);

        if (n - 2 >= 0)
            combinations += climbStairs(n - 2);

        return combinations;
    }
};