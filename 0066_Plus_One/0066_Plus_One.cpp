/*
LeetCode
Problem 66: Plus One
https://leetcode.com/problems/plus-one/
Difficulty: Easy
Related Topics: Array
*/

//
// Solution 01:
//

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();

        // if the last digit is less than 9
        // just increment that digit by 1 and return 'digits'
        if (digits[size - 1] < 9) {
            digits[size - 1]++;
            return digits;
        }

        int carry = 0;
        int sum = 0;

        for (int i = size - 1; i >= 0; --i) {
            // for the last digit only, add 1 as well as carry
            if (i == size - 1)
                sum = digits[i] + 1 + carry;

            // for rest of the digits, add only carry
            else
                sum = digits[i] + carry;

            digits[i] = sum % 10;
            carry = sum / 10;

            if (carry == 0)
                break;
        }

        // if there is still a carry then insert 1 at the beginning of 'digits'
        // e.g. 999 + 1 = 1000 i.e. [9,9,9] --> [1,0,0,0]
        if (carry)
            digits.insert(digits.begin(), 1);

        return digits;
    }
};