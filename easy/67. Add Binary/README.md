# 67. Add Binary

## Problem

Given two binary strings a and b, return their sum as a binary string.

### Example 1

Input: a = "11", b = "1"
Output: "100"

### Example 2

Input: a = "1010", b = "1011"
Output: "10101"

### Constraints

- 1 <= a.length, b.length <= 104
- a and b consist only of '0' or '1' characters.
- Each string does not contain leading zeros except for the zero itself.

---

## Solution

Approach is pretty simple, iterate over both strings until one and convert them to digits using some character magic and add to the output string, also carry if the sum goes beyond 1.

### Time Complexity

O(n)

### Space Complexity

O(1) ~ excluding the output space
