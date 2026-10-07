## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to store opening brackets. Each closing bracket must match the most recently stored opening bracket; otherwise the string is invalid.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The empty string and correctly nested brackets are valid, while mismatched or incorrectly ordered brackets are invalid.
