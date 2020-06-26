/*
LeetCode
Problem 38: Count and Say
https://leetcode.com/problems/count-and-say/
Difficulty: Easy
Related Topics: String
*/

/*
n   output 
1.  1
2.  11
3.  21
4.  1211
5.  111221
6.  312211
7.  13112221
8.  1113213211
9.  31131211131221
10. 13211311123113112211
*/

//
// Solution 01:
//
// First, start with "1" for n = 1 then iteratively use that previous string e.g. "1"
// to construct next string "11". Then so on.
//

class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) return "1";

        int num = 1;
        std::string prev_str = "1";
        std::string new_str = "";

        char prev = prev_str[0];  // previous character in 'prev_str'

        char curr = '\0';  // current character in 'prev_str'

        while (num < n) {
            int index = 1;

            int cnt = 1;  // count of 'prev' char(s)

            new_str = "";

            while (index < prev_str.length()) {
                // 'curr' would be updated based on 'index' for a given 'prev_str'
                curr = prev_str[index];
                
                if (curr == prev) {
                    cnt++;
                } else {
                    new_str += std::to_string(cnt) + prev;
                    index--;
                    cnt = 0;
                }

                prev = curr;
                index++;
            }

            new_str += std::to_string(cnt) + prev;

            prev_str = new_str;
            prev = prev_str[0];
            num++;
        }

        return new_str;
    }
};