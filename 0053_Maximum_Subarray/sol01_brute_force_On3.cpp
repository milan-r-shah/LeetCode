/*
Problem 53: Maximum Subarray
https://leetcode.com/problems/maximum-subarray/
*/

//
// Solution 01:
//
// Simple brute force approach with 3 for loops i.e. O(n3)
// Works fine for simple test cases but gives "Time Limit Exceeded"
// error upon submission because of O(n3) time complexity!!!
//

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        int sum = nums[0];
        int curr_sum = 0;

        for (int i = 0; i < size; ++i) {
            for (int j = i; j < size; ++j) {
                curr_sum = 0;

                for (int k = i; k <= j; ++k)
                    curr_sum += nums[k];

                if (curr_sum > sum)
                    sum = curr_sum;
            }
        }

        return sum;
    }
};