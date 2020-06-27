// LeetCode
// Problem 13: Roman to Integer
// https://leetcode.com/problems/roman-to-integer/
// Difficulty: Easy
// Related Topics: Math, String



// Solution 1
// Iterating through the given string from end...
// 1. For characters: 'V', 'L', 'D', 'M' ...directly adding values
// 2. For characters: 'I', 'X', 'C' ...
//    substracting values in the cases of IV, IX, XL, XC, CD, CM 
//    otherwise adding

class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        char curr = ' ';
        char prev = ' ';

        for (int i = s.length() - 1; i >= 0; --i) {
            curr = s[i];
            if (curr == 'I') {
                if (prev == 'V' || prev == 'X')
                    result += -1;
                else
                    result += 1;
            }

            else if (curr == 'V')
                result += 5;

            else if (curr == 'X') {
                if (prev == 'L' || prev == 'C')
                    result += -10;
                else
                    result += 10;
            }

            else if (curr == 'L')
                result += 50;

            if (curr == 'C') {
                if (prev == 'D' || prev == 'M')
                    result += -100;
                else
                    result += 100;
            }

            else if (curr == 'D')
                result += 500;

            else if (curr == 'M')
                result += 1000;

            prev = curr;
        }

        return result;
    }
};