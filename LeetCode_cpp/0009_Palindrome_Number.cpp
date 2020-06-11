// LeetCode
// Problem 9: Palindrome Number
// https://leetcode.com/problems/palindrome-number/
// Difficulty: Easy
// Related Topics: Math



// Solution 1
// reversing the entire number and then comparing it with the given number

class Solution {
public:
    bool isPalindrome(int x) {
        // check if the number is -ve or multiple of 10 but not 0
        if ((x < 0) || (x != 0 && x % 10 == 0))
            return false;

        int givenNum = x;
        long revNum = 0;

        while (x) {
            revNum = revNum * 10 + x % 10;
            x /= 10;
        }

        return (revNum == givenNum);
    }
};



// Solution 2 <-- more efficient
// Reversing the number only till half & then compare

class Solution {
public:
    bool isPalindrome(int x) {
        // check if the number is -ve or multiple of 10 but not 0
        if (x < 0 || (x != 0 && x % 10 == 0))
            return false;

        int sum = 0;

        // go till half 
        // e.g. for x = 12321, the loop will end when x = 12 & sum = 123
        //      for x = 1221,  the loop will end when x = 12 & sum = 12
        while (x > sum) {
            sum = sum * 10 + x % 10;
            x = x / 10;
        }

        // x == sum     --> for x having even number of digits e.g. x =  1221,  11, 120021
        // x == sum/10  --> for x having odd number of digits  e.g. x = 12321, 121,  12021
        return (x == sum) || (x == sum / 10);
    }
};
