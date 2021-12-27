/*
Problem 1385: Find the Distance Value Between Two Arrays
https://leetcode.com/problems/find-the-distance-value-between-two-arrays/
*/

//
// Solution 01: Brute force
//
// Runtime: ~20 ms   (faster than 71.81% of C++ online submissions)
// Memory:  ~13.2 MB (less than 39.99% of C++ online submissions)
//

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int size1 = arr1.size();
        int size2 = arr2.size();

        int ans = 0;
        int cnt2 = 0;

        for (int i = 0; i < size1; ++i) {
            for (int j = 0; j < size2; ++j) {
                if (abs(arr1[i] - arr2[j]) <= d)
                    break;
                else
                    cnt2++;
            }

            if (cnt2 == size2)
                ans++;

            cnt2 = 0;
        }

        return ans;
    }
};