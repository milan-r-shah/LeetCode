/*
Problem 70. Climbing Stairs
https://leetcode.com/problems/climbing-stairs/
*/

//
// Solution 03a: Fibonacci series based - Bottom-up approach
//
// n3 = n1 + n2;
//

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;

        int n1 = 1;
        int n2 = 2;
        int n3 = 0;

        for (int i = 2; i < n; i++) {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }

        return n3;
    }
};

//
// Solution 03b: Fibonacci series based - Bottom-up approach
//
// all_ways = two_step_before + one_step_before
//

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;

        int two_step_before = 1;
        int one_step_before = 2;
        int all_ways = 0;

        for (int i = 2; i < n; i++) {
            all_ways = two_step_before + one_step_before;
            two_step_before = one_step_before;
            one_step_before = all_ways;
        }

        return all_ways;
    }
};