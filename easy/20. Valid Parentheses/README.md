# 20. Valid Parentheses

---

## Problem

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

- Open brackets must be closed by the same type of brackets.
- Open brackets must be closed in the correct order.

### Example 1

Input: s = "()"
Output: true

### Example 2

Input: s = "()[]{}"
Output: true

### Example 3

Input: s = "(]"
Output: false

### Constraints

- 1 <= s.length <= 104
- s consists of parentheses only '()[]{}'.

---

## Solution

We use a stack to keep track of the parentheses, loop over each index/char of the string and check for the cases:

- base case : if the stack is empty and the curr char is an opening bracket, then push to stack else return false as there it's only a closing bracket and it won't have a corresponding opening bracket.
- iterative cases :
  - if the char is an opening bracket, push to stack
  - else if there is a closing bracker and the current bracket on the top of the stack is it's matching opening bracket, then pop
  - last case : return false as it's not a valid pair

### Time Complexity

O(n)

### Space Complexity

O(1) ~ excluding the stack space

Note: I have implemented slightly different solutions for Java & Rust, as I solved in those two languages first and then went with a different approach with the rest
