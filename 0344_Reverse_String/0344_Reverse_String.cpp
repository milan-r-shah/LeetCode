/*
LeetCode
Problem 344: Reverse String
https://leetcode.com/problems/reverse-string/
Difficulty: Easy
Related Topics: Two Pointers, String
*/

//
// Solution 01:
//

class Solution {
public:
    void reverseString(vector<char>& s) {
        int front = 0;
        int back = s.size() - 1;

        while (front < back)
            swap(s[front++], s[back--]);
    }
};

//
// Solution 02:
//

class Solution {
public:
    void reverseString(vector<char>& s) {
        int front = 0;
        int back = s.size() - 1;
        char bkp = '\0';

        while (front < back) {
            bkp = s[back];
            s[back] = s[front];
            s[front] = bkp;
            front++;
            back--;
        }
    }
};