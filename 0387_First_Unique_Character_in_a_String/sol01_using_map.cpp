/*
LeetCode 
Problem 387: First Unique Character in a String
https://leetcode.com/problems/first-unique-character-in-a-string/
Difficulty: Easy
Related Topics: Hash Table, String
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

//
// Solution 03: using array
//
// Runtime: ~64 ms   (faster than 76.09% of C++ online submissions)
// Memory:  ~10.7 MB (less than 54.42% of C++ online submissions)
//

class Solution {
public:
    int firstUniqChar(string s) {
        int char_arr[26] = {0};
        for (int i = 0; i < s.size(); ++i)
            char_arr[s[i] - 'a']++;

        for (int i = 0; i < s.size(); ++i) {
            if (char_arr[s[i] - 'a'] == 1)
                return i;
        }
        return -1;
    }
};