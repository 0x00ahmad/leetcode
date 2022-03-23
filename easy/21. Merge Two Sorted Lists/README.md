# 21. Merge Two Sorted Lists

---

## Problem

You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

### Example 1

Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]

### Example 2

Input: list1 = [], list2 = []
Output: []

### Example 3

Input: list1 = [], list2 = [0]
Output: [0]

### Constraints

- The number of nodes in both lists is in the range [0, 50].
- -100 <= Node.val <= 100
- Both list1 and list2 are sorted in non-decreasing order.

---

## Solution

There are two approaches, I've added both in the c++ solutions and used the iterative one in the rest of the languages.

(Note: LL = Linked List)

### Iterative

First check for the absense of either LL1 or LL2, after that initiate a new LL and assign the head from one of the input LLs which has the smaller initial value. Then iterate over both LLs while both are present, to check and assign the node with the smaller value of the two. When either one is exhausted just assign the remaining to the newly merged LL and return.

### Recursive

The base cases for the recursive approach are similar, if either or both LLs are null, return the latter or a nullptr.

As for the recursive case: check which one has a smaller value and return that node but just before that; change the next pointer of this LL's node with the smaller value, to the node returned from the recursive call.

### Time Complexity

O(n)

### Space Complexity

O(n) ~ space for the new linked list
