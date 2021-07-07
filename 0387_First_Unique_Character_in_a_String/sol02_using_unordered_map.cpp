/*
Problem 387: First Unique Character in a String
https://leetcode.com/problems/first-unique-character-in-a-string/
*/

//
// Solution 02: using unordered_map <-- unordered_map is faster than map
//
// Runtime: ~104 ms  (faster than 49.11% of C++ online submissions)
// Memory:  ~10.9 MB (less than 16.14% of C++ online submissions)
//

class Solution {
public:
    int firstUniqChar(string s) {
        std::unordered_map<char, int> m;

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
