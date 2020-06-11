// LeetCode
// Problem 14: Longest Common Prefix
// https://leetcode.com/problems/longest-common-prefix/
// Difficulty: Easy
// Related Topics: String



// Solution 1
class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        string result = "";

        // if vector is empty then return empty string
        if (strs.size() < 1)
            return result;

        // this variable will store length of the shortest string/word
        int minLength = strs[0].length();

        // finding a length of the shortest string
        for (auto const &word : strs) {
            if (word.length() < minLength)
                minLength = word.length();
        }

        // comparting corresponding characters of each string/word in a vec
        for (int index = 0; index < minLength; ++index) {
            char ch = strs[0][index];
            bool flag = false;

            for (auto &word : strs) {
                if (word[index] == ch)
                    flag = true;
                else {
                    flag = false;
                    return result;
                }
            }

            result += ch;
        }
        return result;
    }
};



// Solution 2: <-- better solution or at least easy to understand
// first, sort the vector of strings and then compare only
// the first string and the last string. 
class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        string result = "";

        if (strs.size() < 1)
            return result;

        // sorting 'strs' vector
        std::sort(strs.begin(), strs.end());

        std::string firstWord = strs[0];
        std::string lastWord = strs.back();

        for (int index = 0; index < firstWord.length(); ++index) {
            if (firstWord[index] == lastWord[index])
                result += firstWord[index];
            else
                break;
        }

        return result;
    }
};