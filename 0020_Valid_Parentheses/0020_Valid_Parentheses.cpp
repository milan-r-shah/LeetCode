// LeetCode
// Problem 20: Valid Parentheses
// https://leetcode.com/problems/valid-parentheses/
// Difficulty: Easy
// Related Topics: String, Stack



// Solution 1
// Using 2 stacks:  first, for storing all tha parentheses
//                  second, for storing all the closing parentheses

class Solution {
public:
    bool isValid(string s) {
        // this stack will store all the parentheses
        std::stack<char> mainStk;
        for (int i = 0; i < s.length(); ++i) {
            mainStk.push(s[i]);
        }

        // this stack will store only closing parentheses
        std::stack<char> closingParStk;

        // iterate through the mainStk until it's empty
        while (!mainStk.empty()) {
            char mainCh = mainStk.top();

            if (mainCh == ')' || mainCh == ']' || mainCh == '}') {
                closingParStk.push(mainCh);
                mainStk.pop();
                if (mainStk.empty())
                    return false;
            }

            if (mainCh == '(' || mainCh == '[' || mainCh == '{') {
                mainStk.pop();
                if (closingParStk.empty())
                    return false;

                char closingCh = closingParStk.top();
                closingParStk.pop();

                if ((mainCh == '(' && closingCh != ')') || (mainCh == '[' && closingCh != ']') || (mainCh == '{' && closingCh != '}'))
                    return false;
            }
        }

        if (mainStk.empty() && closingParStk.empty())
            return true;
        else
            return false;
    }
};



// Solution 2
// using single stack which will be checked simultaneously while iterting through the give string s

class Solution {
public:
    bool isValid(string s) {
        // if string length is odd then there won't be all the matching parentheses pairs
        // so, return false
        if (s.length() % 2 == 1)
            return false;

        // stack of chars
        std::stack<char> stk;

        for (auto const &ch : s) {
            // push the opening parenthesis to the stack
            if (ch == '(' || ch == '{' || ch == '[') {
                stk.push(ch);
                continue;
            }

            // Here, the first condition stk.empty() is important
            // Among other conditions, it should be at the first place only, it can't be the last one.
            // otherwise there might be an attempt to access the top element of null stack which
            // would give a run-time error
            if (stk.empty() || (ch == ')' && stk.top() != '(') || (ch == ']' && stk.top() != '[') || (ch == '}' && stk.top() != '{'))
                return false;
            
            // pop the opening parenthesis from the stack 
            stk.pop();
        }

        // after iterating through entire string and above operations, if the stack is empty
        // then it means that there were all the matching parentheses pairs.
        return stk.empty();
    }
};