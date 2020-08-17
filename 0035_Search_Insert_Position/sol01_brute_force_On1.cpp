/*
Problem 35. Search Insert Position
https://leetcode.com/problems/search-insert-position/
*/

//
// Solution 01:
//
// Brute Force approach with O(n^1) time complexity
//

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // check if the `target` is <= the first number in `nums`
        if (target <= nums[0])
            return 0;

        // if the `target` > the first number && `target` <= last number
        for (int i = 1; i < nums.size(); ++i) {
            if ((nums[i - 1] < target) && (nums[i] >= target)) {
                return i;
            }
        }

        // if the `target` is greater than the last number
        return nums.size();
    }
};