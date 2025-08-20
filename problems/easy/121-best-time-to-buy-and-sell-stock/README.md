# 121. Best Time to Buy and Sell Stock

**LeetCode:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/  
**Tags:** Array, Greedy, Two Pointers / Sliding Window  
**Difficulty:** Easy

---

## 🧩 Problem
You are given an integer array `prices` where `prices[i]` is the price of a given stock on day `i`.  
You may choose **one day to buy** and **a later day to sell**.  
Return the **maximum profit** you can achieve. If you cannot achieve any profit, return `0`.

---

## 💡 Intuition
Track the **minimum price so far** as your best buy.  
At each day, pretend you sell **today**: `profit = prices[i] - minPrice`.  
Update `maxProfit` if this is better, and update `minPrice` when you see a cheaper price.

This is equivalent to a two-pointer view: `l` = buy (min so far), `r` = sell (current day).  
If `prices[r] < prices[l]`, move `l = r` (new cheaper buy).

---

## 🔀 Approaches

### 1) Brute Force (baseline)
Try every pair `(buy=i, sell=j>i)` and track the best difference.
- **Time:** O(n²)  
- **Space:** O(1)

### 2) Greedy Min-So-Far (Optimal)
- Maintain `minPrice`, `maxProfit`.
- For each price `p`:
  - `maxProfit = max(maxProfit, p - minPrice)`
  - `minPrice = min(minPrice, p)`
- **Time:** O(n)  
- **Space:** O(1)

(Alternative phrasing: **Two pointers** with `l` (buy) and `r` (sell). Reset `l=r` when a new low arrives.)

---

## ⏱️ Complexity
- **Time:** O(n)  
- **Space:** O(1)

---

## ⚠️ Edge Cases & Traps
- Empty array or single element → return `0`
- Strictly decreasing prices → return `0`
- Equal prices (plateau) → return `0`
- Don’t compute profit before you possibly update `minPrice` in the same iteration.

---

## 🧪 Dry Run
`prices = [2,1,2,1,0,1,2]`

- Start: `minPrice=∞`, `maxProfit=0`
- `2`: profit=0, `minPrice=2`, `maxProfit=0`
- `1`: profit=0, `minPrice=1`, `maxProfit=0`
- `2`: profit=1, `minPrice=1`, `maxProfit=1`
- `1`: profit=0, `minPrice=1`, `maxProfit=1`
- `0`: profit=0, `minPrice=0`, `maxProfit=1`
- `1`: profit=1, `minPrice=0`, `maxProfit=1`
- `2`: profit=2, `minPrice=0`, `maxProfit=2` ✅

**Result:** `2` (buy at `0`, sell at `2`)

---

## 🧱 Implementation
See `solution.cpp` in this folder.

---

## 🔁 Variations to Practice
- Best Time to Buy/Sell II (multiple transactions)
- With **transaction fee**
- With **cooldown**
- At most **k** transactions (DP)
- Kadane-style analog: maximum difference with order constraint
