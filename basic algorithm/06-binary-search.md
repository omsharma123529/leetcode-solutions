## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I used two pointers, left and right, to represent the current search range. The middle element is checked and half of the search range is discarded after each comparison.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

The input must be sorted for binary search to work correctly. A target that is not present returns -1.
