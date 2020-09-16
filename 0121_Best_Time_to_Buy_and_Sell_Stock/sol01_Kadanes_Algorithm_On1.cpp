/*
* Problem 121: Best Time to Buy and Sell Stock
* https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
*/

//
// Solution 01: Kadane's Algorithm
// Time Complexity: O(n^1)
//

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty())
            return 0;

        int max_profit = 0;
        int min_so_far = prices[0];

        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] < min_so_far)
                min_so_far = prices[i];
            else
                max_profit = std::max(max_profit, prices[i] - min_so_far);
        }

        return max_profit;
    }
};