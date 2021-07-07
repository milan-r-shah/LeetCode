/*
Problem 28: Implement strStr()
https://leetcode.com/problems/implement-strstr/
*/

//
// Interesting test case:
// haystack = "mississippi" & needle = "issip"
// haystack = "aabaabbabaa" & needle = "abaa"
//

// 
// Solution 01: <-- first, matching first char in needle
//

class Solution {
public:
    int strStr(string haystack, string needle) {
        int len_h = haystack.length();
        int len_n = needle.length();

        // if 'needle' length is 0, return 0
        if (len_n == 0) return 0;

        // if 'needle' length is higher than that of 'haystack', return -1
        if (len_n > len_h) return -1;

        // iterate from 0 to 'len_h - len_n' in 'haystack'
        for (int i = 0; i <= len_h - len_n; ++i) {
            // if given letter in 'haystack' matches with the first letter in 'needle'
            if (haystack[i] == needle[0]) {
                int j = 0;

                for (j = 0; j < len_n; ++j) {
                    if (haystack[i + j] != needle[j])
                        break;
                }

                if (j == len_n)
                    return i;
            }
        }

        return -1;
    }
};
