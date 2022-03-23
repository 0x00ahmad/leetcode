# 383. Ransom Note

---

## Problem

Given two strings ransomNote and magazine, return true if ransomNote can be constructed from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.

### Example 1

Input: ransomNote = "a", magazine = "b"
Output: false

### Example 2

Input: ransomNote = "aa", magazine = "ab"
Output: false

### Example 3

Input: ransomNote = "aa", magazine = "aab"
Output: true

### Constraints

- 1 <= ransomNote.length, magazine.length <= 105
- ransomNote and magazine consist of lowercase English letters.

---

## Solution

To solve this, we have to first iterate over the magazine string and map it's letter frequency to a hash map and then iterate over the ransomNote string to check if it can be constructed from the magazine string. If the count drops below zero, then it's false as the character is not going to be present in the magazine string to construct the ransomNote string from.

### Time Complexity

O(n)

### Space Complexity

O(1) ~ excluding the magazine frequency count hash map
