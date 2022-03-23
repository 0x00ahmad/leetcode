# Maximum Subarray

---

### Time Complexity

O(n) ~ for iterating over the array

### Space Complexity

O(1)

## Best scores

Runtime ~ 112ms
Memory Usage ~ 67.8MB

## Explaination

the way to solve this is to just brute force, but there are two ways - one is O(n^2) whereas the other is O(n). We will stick with the O(n) solution as that's the one implemented below.

### Kadene's algorithm

Which basically states that the maximum subarray is just the maximum of the array[i] with the sum of
array[i] and the local maximum at index i-1 (prior local max)
