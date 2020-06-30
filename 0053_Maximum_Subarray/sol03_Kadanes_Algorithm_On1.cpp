/*
Problem 53: Maximum Subarray
https://leetcode.com/problems/maximum-subarray/
*/

//
// Solution 03a: <-- Kadan's Algorithm - O(n) time complexity
// 
// https://youtu.be/jnoVtCKECmQ - Kadan's Algorithm
//
// using if...else...
// Runtime: ~20 ms, faster than 15.93% of C++ online submissions
// Memory:  ~13.1 MB, less than 94.21% of C++ online submissions
//

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum = nums[0];
        int max_sum = curr_sum;

        for (int i = 1; i < nums.size(); ++i) {
            if (curr_sum + nums[i] > nums[i])
                curr_sum += nums[i];
            else
                curr_sum = nums[i];

            if (curr_sum > max_sum)
                max_sum = curr_sum;
        }

        return max_sum;
    }
};

//
// Solution 03b: <-- Kadan's Algorithm - O(n) time complexity
//
// https://youtu.be/jnoVtCKECmQ - Kadan's Algorithm
//
// using std::max()
// Runtime: ~20 ms, faster than 15.93% of C++ online submissions
// Memory:  ~13.1 MB, less than 94.21% of C++ online submissions
//

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum = nums[0];
        int max_sum = curr_sum;

        for (int i = 1; i < nums.size(); ++i) {
            curr_sum = max(curr_sum + nums[i], nums[i]);
            max_sum = max(max_sum, curr_sum);
        }

        return max_sum;
    }
};