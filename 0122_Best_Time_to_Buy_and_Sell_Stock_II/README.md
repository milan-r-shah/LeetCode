### LeetCode 
## Problem 122: Best Time to Buy and Sell Stock II

https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

Difficulty: Easy

---

Say you have an array `prices` for which the i<sup>th</sup> element is the price of a given stock on day *i*.

Design an algorithm to find the maximum profit. You may complete as many transactions as you like (i.e., buy <br>
one and sell one share of the stock multiple times).

**Note:** You may not engage in multiple transactions at the same time (i.e., you must sell the stock before you <br>
buy again).

#### Example 1:

<pre>
<b>Input:</b> [7,1,5,3,6,4]
<b>Output:</b> 7
<b>Explanation:</b> Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
             Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
</pre>

#### Example 2:

<pre>
<b>Input:</b> [1,2,3,4,5]
<b>Output:</b> 4
<b>Explanation:</b> Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4.
             Note that you cannot buy on day 1, buy on day 2 and sell them later, as you are
             engaging multiple transactions at the same time. You must sell before buying again.
</pre>

#### Example 3:

<pre>
<b>Input:</b> [7,6,4,3,1]
<b>Output:</b> 0
<b>Explanation:</b> In this case, no transaction is done, i.e. max profit = 0.
</pre>

**Constraints:**

- `1 <= prices.length <= 3 * 10 ^ 4`
- `0 <= prices[i] <= 10 ^ 4`

---

**Related Topics:** 
`Array`, `Greedy`