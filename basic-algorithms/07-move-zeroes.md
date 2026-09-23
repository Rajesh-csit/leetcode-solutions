# Move Zeroes

## Problem / Difficulty

**LeetCode 283 — Move Zeroes**

**Difficulty:** Easy–Medium

## Problem Link

https://leetcode.com/problems/move-zeroes/

## Approach

We need to move all zeroes to the end of the array while keeping the relative order of the non-zero elements.

We use two pointers. The `i` pointer scans the array, while `j` keeps track of the position where the next non-zero element should be placed. Whenever a non-zero element is found, we swap `nums[i]` with `nums[j]` and increase `j`.

## Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

## Notes

- All non-zero elements must keep their original relative order.
- All zeroes are moved to the end.
- The solution modifies the array in-place.
- Example:
  - `[0,1,0,3,12]` → `[1,3,12,0,0]`
  - `[0]` → `[0]`