# 28. Implement strStr

## Problem

Implement strStr().

Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Clarification:

What should we return when needle is an empty string? This is a great question to ask during an interview.

For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().

### Example 1

Input: haystack = "hello", needle = "ll"
Output: 2

### Example 2

Input: haystack = "aaaaa", needle = "bba"
Output: -1

### Example 3

Input: haystack = "", needle = ""
Output: 0

### Constraints

- 0 <= haystack.length, needle.length <= 5 \* 104
- haystack and needle consist of only lower-case English characters.

---

## Solution

If you solve the solution by yourself, you'd be looking at another 2 pointer approach where you will have to seek ahead for the first matching character and see if that matched the needle, if it does then you can safely return the string else you'd have to keep looking ahead resetting the previous check.

But I think it's cheat day today ;) because there's a builtin string method that just finds us the index ~ String.find(target_str)

### Time Complexity

O(n)

### Space Complexity

O(1)
