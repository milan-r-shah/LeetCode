// LeetCode
// Problem 7: Reverse Integer
// https://leetcode.com/problems/reverse-integer/
// Difficulty: Easy
// Related Topics: Math



class Solution {
public:
    int reverse(int x) {
        long result = 0;
        while (x) {
            result = result * 10 + x % 10;
            x /= 10;
        }

        return (result > INT_MAX || result < INT_MIN) ? 0 : result;
    }
};