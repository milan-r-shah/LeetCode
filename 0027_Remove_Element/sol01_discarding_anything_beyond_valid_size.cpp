/*
Problem 27: Remove Element
https://leetcode.com/problems/remove-element/
*/

//
// Solution 01:
//

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int valid_size = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val)
                nums[valid_size++] = nums[i];
        }

        return valid_size;
    }
};