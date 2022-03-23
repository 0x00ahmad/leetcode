# 242. Valid Anagram

---

## Problem

Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

### Example 1

Input: s = "anagram", t = "nagaram"
Output: true

### Example 2

Input: s = "rat", t = "car"
Output: false

### Constraints

- 1 <= s.length, t.length <= 5 \* 104
- s and t consist of lowercase English letters.

---

## Solution

The trick is simple, spread each character of both strings into two arrays, sort them and compare the each index. The first non-matching index denotes that the word is not an anagram, else it is if the check passes.

### Time Complexity

O(n)

### Space Complexity

O(n) ~ as the array sizes depend on the the length of the strings
