/*
* Problem 122: Best Time to Buy and Sell Stock II
* https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
*/

//
// Solution 01:
// Inspired from: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/discuss/208241/Explanation-for-the-dummy-like-me.
//
// Let say prices = {7, 1, 5, 3, 6, 4} so answer is (5 - 1) + (6 - 3) = 4 + 3 = 7
// Here is the logic:
// 1. First of all, find the first number which is lower than its previous number, buy on that day.
//    so, we found 1 because 1 < 7. Buy on that day
// 2. Now, keep finding a number which is higher than its next number, sell on that day.
//    so, we found 5 because 5 > 3. Sell on that day
//    profit = 5 - 1 = 4
// 3. Repeat the above two steps & keep adding it to `profit` until you reach at the end of the array i.e. `prices`
//    Found 3 (as 3 < 6) buy. Found 6 (as 6 > 4) sell. Profit = 6 - 3 = 3
//
// So, profit is 4 + 3 = 7
//

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size() - 1;
        int buy = 0;
        int sell = 0;
        int profit = 0;
        int i = 0;

        while (i < n) {
            while (i < n && prices[i] >= prices[i + 1])
                i++;

            buy = prices[i];

            while (i < n && prices[i] < prices[i + 1])
                i++;

            sell = prices[i];

            profit += (sell - buy);
        }

        return profit;
    }
};
