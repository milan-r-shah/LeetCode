/*
* Problem 122: Best Time to Buy and Sell Stock II
* https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
*/

//
// Solution 02:
// Inspired from: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/discuss/39420/Three-lines-in-C%2B%2B-with-explanation
//
// Let say prices = {1, 2, 3, 4} so answer is 4 - 1 = 3
// But the approach is as   1 < 2 => buy at 1, sell at 2
// same way                 2 < 3 => buy at 2, sell at 3
//                          3 < 4 => buy at 3, sell at 4
// so (2 - 1) + (3 - 2) + (4 - 3) = 4 - 1 = 3
//
// Basically, here, we are checking only for two consecutive numbers and
// buying at certain prices and selling at the same prices on the same day means doing nothing.
// It just makes the overall comparison easy.
//

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;

        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] > prices[i - 1])
                profit += prices[i] - prices[i - 1];
        }

        return profit;
    }
};