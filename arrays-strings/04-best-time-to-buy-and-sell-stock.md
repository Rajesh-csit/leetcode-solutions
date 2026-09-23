# Best Time to Buy and Sell Stock

## Problem / Difficulty

**LeetCode 121 — Best Time to Buy and Sell Stock**

**Difficulty:** Easy

## Problem Link

https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach

We need to find the maximum profit from buying the stock on one day and selling it on a later day.

We keep track of two values:

- `minPrice` — the minimum stock price seen so far.
- `maxProfit` — the maximum profit found so far.

For each price:

1. Update `minPrice` if the current price is smaller.
2. Calculate the profit using:
   `current price - minPrice`
3. Update `maxProfit` if the current profit is greater.

For example:

`[7, 1, 5, 3, 6, 4]`

The best choice is to buy at `1` and sell at `6`.

Profit = `6 - 1 = 5`

If the prices continuously decrease, such as `[7,6,4,3,1]`, no profit is possible, so the answer is `0`. :contentReference[oaicite:0]{index=0}

## Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

## Notes

- We must buy before selling.
- Only one buy and one sell are allowed.
- If no profit is possible, return `0`.