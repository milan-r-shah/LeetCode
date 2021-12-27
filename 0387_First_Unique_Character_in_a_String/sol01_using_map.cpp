/*
Problem 387: First Unique Character in a String
https://leetcode.com/problems/first-unique-character-in-a-string/
*/

//
// Solution 01: using map   <-- not efficient one
//
// Runtime: ~192 ms  (faster than 12.29% of C++ online submissions)
// Memory:  ~10.8 MB (less than 44.37% of C++ online submissions)
//

class Solution {
public:
    int firstUniqChar(string s) {
        std::map<char, int> m;

        for (auto const& ch : s) {
            m[ch]++;
        }

        for (int i = 0; i < s.length(); ++i) {
            if (m[s[i]] == 1)
                return i;
        }

        return -1;
    }
};
