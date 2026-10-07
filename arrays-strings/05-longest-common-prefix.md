## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I started with the first string as the possible prefix and compared it character by character with every other string. The prefix length is shortened whenever a mismatch is found.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

If there is no common starting character, the result is an empty string.
