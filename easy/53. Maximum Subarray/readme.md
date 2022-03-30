# Maximum Subarray

## Problem

Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.

### Example 1

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

### Example 2

Input: nums = [1]
Output: 1

### Example 3

Input: nums = [5,4,-1,7,8]
Output: 23

### Constraints

- 1 <= nums.length <= 105
- -104 <= nums[i] <= 104

---

## Solution

There are two ways to approach this - one is O(n^2) (brute force) whereas the other is O(n). We will stick with the O(n) solution as that's the one I used to solve.

### Kadene's algorithm

Which basically states that the maximum subarray is just the maximum of the array[i] with the sum of
array[i] and the local maximum at index i-1 (prior local max)

### Time Complexity

O(n)

### Space Complexity

O(1)
