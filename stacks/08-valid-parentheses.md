# Valid Parentheses

## Problem / Difficulty

**LeetCode 20 — Valid Parentheses**

**Difficulty:** Easy

## Problem Link

https://leetcode.com/problems/valid-parentheses/

## Approach

We use a **stack** to check whether the brackets are properly matched.

When we find an opening bracket `(`, `[`, or `{`, we push it into the stack.

When we find a closing bracket `)`, `]`, or `}`, we check the top of the stack. If it matches the corresponding opening bracket, we remove it from the stack. If it does not match, the string is invalid.

At the end, the stack must be empty for the parentheses to be valid.

## Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

## Notes

- Opening brackets are pushed into the stack.
- Closing brackets are matched with the top element of the stack.
- If the stack is empty when a closing bracket is found, the string is invalid.
- The stack must be empty at the end.
- Example:
  - `"()"` → `true`
  - `"([)]"` → `false`