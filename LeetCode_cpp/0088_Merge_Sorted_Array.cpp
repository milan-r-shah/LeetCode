// LeetCode
// Problem 88: Merge Sorted Array
// https://leetcode.com/problems/merge-sorted-array/
// Difficulty: Easy
// Related Topics: Array, Two Pointers

//
// Solution 01:
//

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // if 'nums2' is empty then just return
        if (nums2.empty())
            return;

        // iterating from 0 to 'm - 1'
        for (int index = 0; index < m; ++index) {
            // check if the value in 'nums1' is greather than first value in 'nums2'
            if (nums1[index] > nums2[0]) {
                // swap bigger number is 'nums1' with smaller number from 'nums2'
                swap(nums1[index], nums2[0]);

                // sort 'nums2' so that smallest value is always at the beginning
                std::sort(nums2.begin(), nums2.end());
            }
        }

        // for remaining indices in 'nums1', replace 0s with 'nums2'
        for (int index = m; index < m + n; ++index) {
            nums1[index] = nums2[index - m];
        }
    }
};

//
// Solution 02:
//
// Here, we will iterate from 'm + n - 1' indice in 'nums1' and start replacing values 
// with the bigger values from 'nums1' or 'nums2'.
// After that, if all the values from 'nums2' haven't copied to 'nums1' then those
// remaining values will be copied to 'nums1'.
// 

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j])
                nums1[k--] = nums1[i--];
            else
                nums1[k--] = nums2[j--];
        }

        while (j >= 0)
            nums1[k--] = nums2[j--];
    }
};