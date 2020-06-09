// LeetCode 
// Problem 136: Single Number
// https://leetcode.com/problems/single-number/
// Difficulty: Easy
// Related Topics: Hash Table, Bit Manipulation


// Solution 1: Using Hash Map
// Runtime: ~44 ms
// Memory: ~14.2 MB

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        
        // std::map<key, value> m
        std::map<int, int> m;

        // Updating the count of 'value' for key
        for(int &elem : nums) {
            m[elem]++;
        }
        
        // Iterating through all the 'key' in a map
        // until the corresponding 'value' is 1
        for(auto const &elem : m) {
            if (elem.second == 1) {
                // storing that 'key' in 'ans'
                ans = elem.first;
                break;
            }
        }
        
        return ans;
    }
};




// Solution 2: Using XOR(^)
// Runtime: ~20 ms
// Memory: ~12.1 MB

// A ^ A = 0
// A ^ 0 = A
// XOR(^) is commutative and associative.
// So, while XORing all the elements of a vector 'nums' 
// repeating elements would result to '0'
// and XORing single element with 0 would result in the same number

class Solution {
public:
    int singleNumber(vector<int>& nums) {      
        int ans = 0;
        for(auto const&elem : nums)
            ans ^= elem;
        
        return ans;
    }
};




// Solution 3: Sorting a vector and then comparing consecutive elements
// Runtime: ~20 ms
// Memory: ~9.9 MB


class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        std::sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i+=2)
        {
            if(nums[i-1] != nums[i])
            {
                return nums[i-1];
            }  
        }
        return nums[nums.size()-1];
    }
};