// LeetCode
// Problem 26: Remove Duplicates from Sorted Array
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Difficulty: Easy
// Related Topics: Array, Two Pointers


//
// Solution 1:
//
// In this solution, each new unique number will be swapped with the
// next number of previous unique number in a vector.
// So, in this method, all the numbers would be preserved (which is not
// required as per the problem statement)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // if vector size is <= 1 then simply return its size
        if (nums.size() <= 1)
            return nums.size();

        // a variable containing the count of unique numers
        int uniqCnt = 1;

        // previous unique number
        int prev = nums[0];

        // index of the previous unique number
        int prevIndex = 0;

        // current number
        int curr = 0;

        for (int index = 1; index < nums.size(); ++index) {
            curr = nums[index];

            if (curr > prev) {
                // increase the count of unique numbers
                uniqCnt++;

                // next 3 lines are for swapping the new unique with next
                // number of a previous unique number in a vector
                int temp = nums[prevIndex + 1];
                nums[prevIndex + 1] = nums[index];
                nums[index] = temp;

                // updating the index of unique number
                prevIndex++;

                // updating previous unique number with new unique number
                prev = curr;
            }
        }

        return uniqCnt;
    }
};


//
// Solution 2: <-- betteer, easy to read, easy to understand, & simple solution
//
// In this solution, each new unique number will take place of/replace the next
// number of previous unique number.
// So, here, all the numbers won't be preserved. At the end of program execution,
// all the unique number will be at the beginning.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // if vector size is <= 1 then simply return its size
        if (nums.size() <= 1)
            return nums.size();

        // a variable containing the count of unique numers
        int uniqCnt = 1;

        // index of the previous unique number
        int prevUniqIndex = 0;

        for (int index = 1; index < nums.size(); ++index) {
            if (nums[index] != nums[prevUniqIndex]) {
                // increase the count of unique numbers
                uniqCnt++;

                // replace the next num of prevoious unique num with new unique num
                nums[++prevUniqIndex] = nums[index];
            }
        }

        return uniqCnt;
    }
};


//
// Solution 3: <-- even betteer, easy to read, easy to understand, & simple solution
//
// In the above solution, there were two variables: uniqCnt & prevUniqIndex
// But they were kind of related so basically, one of them was redundant.
// So, in this solution, there is only one vaiable: uniqCnt. Rest of the things
// are almost same.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 1)
            return nums.size();

        int uniqCnt = 1;

        for (int index = 1; index < nums.size(); ++index) {
            if (nums[index] > nums[uniqCnt - 1]) {
                nums[uniqCnt++] = nums[index];
            }
        }

        return uniqCnt;
    }
};
