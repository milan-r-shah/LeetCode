/*
Problem 38: Count and Say
https://leetcode.com/problems/count-and-say/
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
// Solution 02: <-- using recursion and a for loop
//

class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) return "1";

        std::string prev_str = countAndSay(n - 1);
        std::string new_str = "";

        char key = prev_str[0];
        int cnt = 1;

        for (int i = 1; i < prev_str.length(); ++i) {
            if (prev_str[i] == key) {
                cnt++;
            } else {
                new_str += std::to_string(cnt) + key;
                key = prev_str[i];
                cnt = 1;
            }
        }

        new_str += std::to_string(cnt) + key;

        return new_str;
    }
};