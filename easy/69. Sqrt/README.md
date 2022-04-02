# 69. Sqrt

## Problem

Given a non-negative integer x, compute and return the square root of x.

Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.

Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x \*\* 0.5.

### Example 1

Input: x = 4
Output: 2

### Example 2

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since the decimal part is truncated, 2 is returned.

### Constraints

- 0 <= x <= 231 - 1

---

## Solution

The solution is to think of the problem in the binary search space, where from 1 upto the target number we need to find that smallest number that adds upto the square of the target, if on calculating the mid, we find out that the number is larger then that means that our potential target is supposed to be lower and vice versa. In the case where even the last number is no applicable (in terms of 8, the example above), then we will just subtract one and return the final number. Example

t = 8
range_visualized = [ 1 2 3 4 5 6 7 8 ]

### Time Complexity

O(log n)

### Space Complexity

O(1)
