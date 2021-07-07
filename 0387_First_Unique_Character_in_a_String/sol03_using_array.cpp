/*
Problem 387: First Unique Character in a String
https://leetcode.com/problems/first-unique-character-in-a-string/
*/

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