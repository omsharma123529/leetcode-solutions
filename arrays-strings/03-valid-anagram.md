## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used a character-frequency array to count the characters in both strings. If every frequency returns to zero after comparing the two strings, they are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution first checks whether the strings have equal lengths, which quickly handles an important edge case.
