// LeetCode 
// Problem 448: Find All Numbers Disappeared in an Array
// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
// Difficulty: Easy
// Related Topics: Array

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        std::vector<int> nums2(nums.size());
        std::vector<int> nums3;
        for(auto &elem : nums) {
            nums2[elem - 1]++;
        }
        for(int i = 0; i < nums2.size(); ++i) {
            if(nums2[i] == 0)
                nums3.push_back(i+1);
        }
        return nums3;
    }
};