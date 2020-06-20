/*
LeetCode
Problem 125: Valid Palindrome
https://leetcode.com/problems/valid-palindrome/
Difficulty: Easy
Related Topics: Two Pointers, String
*/

//
// Solution 01:
//

class Solution {
public:
    bool isPalindrome(string s) {
        if (s.empty()) return true;

        // two pointers
        int front = 0;
        int back = s.length() - 1;

        while (front < back) {
            // iterate until the given character is not alphanumeric && front < back
            while (!isalnum(s[front]) && front < back)
                front++;

            // iterate until the given character is not alphanumeric && front < back
            while (!isalnum(s[back]) && front < back)
                back--;

            // convert both characters to lower case & then compare.
            // Also, increment 'front' & decrement 'back' pointer
            if (tolower(s[front++]) != tolower(s[back--])) {
                return false;
            }
        }

        return true;
    }
};