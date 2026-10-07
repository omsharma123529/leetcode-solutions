## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I tracked the lowest stock price seen so far and calculated the profit possible at each later price. The maximum profit found during the scan is returned.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

If prices only decrease, no profitable transaction exists and the answer is zero.
