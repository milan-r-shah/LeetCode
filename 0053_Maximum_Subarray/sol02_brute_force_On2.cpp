/*
Problem 53: Maximum Subarray
https://leetcode.com/problems/maximum-subarray/
*/

//
// Solution 02:
//
// Simple brute force approach with 2 for loops i.e. O(n2)
// Runtime: ~456 ms, faster than 5.73% of C++ online submissions
// Memory:  ~13.2 MB, less than 73.55% of C++ online submissions
//

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        int sum = nums[0];
        int curr_sum = 0;

        for (int i = 0; i < size; ++i) {
            curr_sum = 0;

            for (int j = i; j < size; ++j) {
                curr_sum += nums[j];

                if (curr_sum > sum)
                    sum = curr_sum;
            }
        }

        return sum;
    }
};