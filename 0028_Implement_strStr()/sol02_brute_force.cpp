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
// Solution 02: <-- temp solution
// Brute force approach with two for loops
// working fine for simple test cases but
// in the submission, giving "Time Limit Exceeded" error
//

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;

        int len_h = haystack.length();
        int len_n = needle.length();

        if (len_n > len_h) return -1;

        int ptr_h = 0;
        int ptr_n = 0;

        std::vector<int> match_vec;

        int prev_match_index = len_h;  // - len_n;

        for (int i = 0; i < len_h; ++i) {
            ptr_n = 0;

            for (int j = i; j < len_h; ++j) {
                if (haystack[j] == needle[ptr_n]) {
                    ptr_n++;
                } else {
                    ptr_n = 0;
                }

                if (ptr_n == len_n) {
                    // return j - len_n + 1;
                    if (prev_match_index > j - len_n + 1) {
                        // std::cout << prev_match_index << "\t";
                        prev_match_index = j - len_n + 1;
                        // std::cout << prev_match_index << "\n";
                    }
                }
            }
        }

        if (prev_match_index < len_h)
            return prev_match_index;

        return -1;
    }
};