// LeetCode 
// Problem 1: Two Sum
// https://leetcode.com/problems/two-sum/
// Difficulty: Easy
// Related Topics: Array, Hash Table


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> indices_vec;
        for(int i = 0; i < nums.size(); ++i) {
            for(int j = i+1; j < nums.size(); ++j) {
                if (nums[i] == target - nums[j]) {
                    indices_vec.push_back(i);
                    indices_vec.push_back(j);
                }
            }
        }
        return indices_vec;
    }
};