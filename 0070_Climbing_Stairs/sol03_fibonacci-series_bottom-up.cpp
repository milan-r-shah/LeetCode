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

        int n1 = 2;
        int n2 = 1;
        int n3 = 0;

        for (int i = 2; i < n; i++) {
            n3 = n1 + n2;
            n2 = n1;
            n1 = n3;
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

//
// Solution 03c: Fibonacci series based - Bottom-up approach
//
// using vector: vec[n] = vec[n-1] + vec[n-2]
//

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;

        std::vector<int> combinations(n + 1);

        combinations[1] = 1;
        combinations[2] = 2;

        for (int i = 3; i <= n; i++) {
            combinations[i] = combinations[i - 1] + combinations[i - 2];
        }

        return combinations[n];
    }
};
