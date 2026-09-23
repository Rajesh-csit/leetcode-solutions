# Longest Common Prefix

## Problem / Difficulty

**LeetCode 14 — Longest Common Prefix**

**Difficulty:** Easy

## Problem Link

https://leetcode.com/problems/longest-common-prefix/

## Approach

We need to find the longest prefix that is common to all the strings.

We take the first string as the initial prefix and compare it with each of the remaining strings.

For each string:

1. Compare characters from the beginning.
2. Continue while the characters are the same.
3. If a mismatch occurs, reduce the prefix to the matching part.
4. Continue with the next string.

For example:

`["flower", "flow", "flight"]`

All three strings start with `"fl"`.

So the longest common prefix is:

`"fl"`

If there is no common prefix, we return an empty string `""`.

## Complexity

- **Time Complexity:** O(n × m)
- **Space Complexity:** O(1)

Where `n` is the number of strings and `m` is the length of the shortest relevant prefix.

## Notes

- A prefix must occur at the beginning of every string.
- If even one string does not match, the common prefix becomes shorter.
- If there is no common prefix, return `""`.
- Example:
  - `["flower", "flow", "flight"]` → `"fl"`
  - `["dog", "racecar", "car"]` → `""`