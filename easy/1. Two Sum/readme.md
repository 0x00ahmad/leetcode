# Two Sum

## Problem

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

### Example 1

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

### Example 2

Input: nums = [3,2,4], target = 6
Output: [1,2]

### Example 3

Input: nums = [3,3], target = 6
Output: [0,1]

### Constraints

- 2 <= nums.length <= 104
- -109 <= nums[i] <= 109
- -109 <= target <= 109
- Only one valid answer exists.

---

## Solution

Make a hash map of `number : idx` and at each iteration; calculate the difference between the target and num at the current iteration. If that difference number is found in the hash map, then we have found the two numbers. Else the solution does not exist.

The key was the hash map, on each failed iteration, we push that number and it's corresponding index into the hash map, which we can reference later on when matching differences for the later numbers from the given array.

### Time Complexity

O(n)

### Space Complexity

O(n)
