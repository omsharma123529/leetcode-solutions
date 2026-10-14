## Problem: Reverse a Linked List (Easy–Medium)

**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach

I used an iterative three-pointer technique (`prev`, `curr`, `nextTemp`). By traversing the list node-by-node and pointing each node's next pointer backwards to `prev`, the list is reversed in-place without recursion.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

Remembering to save `curr->next` before redirecting the pointer prevents losing reference to the remainder of the list. An empty list or single node returns immediately.
