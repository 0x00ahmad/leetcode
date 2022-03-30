# 66. Plus One

## Problem

You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

### Example 1

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].

### Example 2

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].

### Example 3

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].

### Constraints

- 1 <= digits.length <= 100
- 0 <= digits[i] <= 9
- digits does not contain any leading 0's.

---

## Solution

There are two optimal approaches, one is using mod and division but that's more expensive than the one I have used.

iterate from the end of the array and for each digit perform the check:

- the digit is less than 9
  - just increment and return as no further mutation is required
- the digit is 9
  - then zero this one out and check the next digit until we reach the end

in the case we reach the first digit in the array, that means it was a case similar to [9,9,9] where we have to add another digit to make it [1,0,0,0]

### Time Complexity

O(n)

### Space Complexity

O(1)
