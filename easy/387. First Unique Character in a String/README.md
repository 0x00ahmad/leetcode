# 387. First Unique Character in a String

---

## Problem

Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

### Example 1

Input: s = "leetcode"
Output: 0

### Example 2

Input: s = "loveleetcode"
Output: 2

### Example 3

Input: s = "aabb"
Output: -1

### Constraints

- 1 <= s.length <= 105
- s consists of only lowercase English letters.

---

## Solution

There are two iterations, the first one is for mapping the frequency of each character to the array map. And the second iteration is for checking which character is repeated only once.

### Time Complexity

O(n)

### Space Complexity

O(1) ~ excluding the constant array rspace
