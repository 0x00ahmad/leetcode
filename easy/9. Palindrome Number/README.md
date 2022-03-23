# 9. Palindrome Number

---

## Problem

Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward.

For example, 121 is a palindrome while 123 is not.

### Example 1

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

### Example 2

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

### Example 3

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

### Constraints

- -231 <= x <= 231 - 1

Follow up: Could you solve it without converting the integer to a string?

---

## Solution

So I directly delved into the follow up as the normal one with the string is really easy (if you know how to reverse a string).

The approach with ints is that we can use the mod operator to get last slice of the input number. We can essentially leverage this logic and easily build the string in reverse, and then finally return true if it's a palindrome

### Time Complexity

O(n) ~ excluding the divide & mod operations as they can get expensive

### Space Complexity

O(1)
