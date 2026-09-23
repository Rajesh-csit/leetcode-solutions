# Binary Search

## Problem / Difficulty

**LeetCode 704 — Binary Search**

**Difficulty:** Easy

## Problem Link

https://leetcode.com/problems/binary-search/

## Approach

We are given a sorted array and a target value. We need to find the index of the target.

We use **Binary Search**, which repeatedly divides the search range into half.

We maintain two variables:

- `left` — starting index of the search range.
- `right` — ending index of the search range.

Steps:

1. Find the middle index using:
   `mid = left + (right - left) / 2`
2. If `nums[mid]` is equal to the target, return `mid`.
3. If `nums[mid]` is smaller than the target, search the right half.
4. If `nums[mid]` is greater than the target, search the left half.
5. If the target is not found, return `-1`.

For example:

`nums = [-1, 0, 3, 5, 9, 12]`

For `target = 9`, the target is at index `4`.

For `target = 2`, the target does not exist, so we return `-1`.

## Complexity

- **Time Complexity:** O(log n)
- **Space Complexity:** O(1)

## Notes

- The array must be sorted in ascending order.
- Binary Search eliminates half of the remaining elements in each step.
- If the target is found, return its index.
- If the target is not present, return `-1`.