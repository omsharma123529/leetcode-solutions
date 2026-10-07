## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I used an insertion position to place every non-zero element at the front of the array. After all non-zero values are placed, the remaining positions are filled with zeroes.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The operation is performed in-place, so no second array is required.
