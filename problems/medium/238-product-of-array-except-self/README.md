# 238. Product of Array Except Self

**LeetCode:** https://leetcode.com/problems/product-of-array-except-self/  
**Tags:** Array, Prefix/Suffix Product  
**Difficulty:** Medium

---

## 🧩 Problem
Return an array `answer` where `answer[i]` is the product of all elements of `nums` **except** `nums[i]`, **without** using division, in **O(n)** time and **O(1)** extra space (excluding the output array).

**Example**
Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
---

## 💡 Intuition
Compute product of all elements to the **left** of each index and all elements to the **right**, then multiply them.  
Do it in two passes:  
1) left-to-right build **prefix** products in the result array,  
2) right-to-left multiply by a running **suffix** product.

---

## 🔀 Approaches

### 1) Brute Force (for thinking baseline)
For each index `i`, multiply all `j != i`.  
- **Time:** O(n²)  
- **Space:** O(1) (excluding output)

### 2) Prefix + Suffix (Optimal)
- Pass 1: `res[i] = product(nums[0..i-1])`
- Pass 2: keep `suffix`, update `res[i] *= suffix`, then `suffix *= nums[i]`
- **Time:** O(n)  
- **Space:** O(1) extra (result not counted)

---

## ⏱️ Complexity
- **Time:** O(n)  
- **Space:** O(1) extra (output array excluded)

---

## ⚠️ Edge Cases & Traps
- **Zeros**:
  - One zero → output all zeros except the zero’s index = product of non-zero elements
  - Two or more zeros → output all zeros
- Watch **off-by-one** in suffix loop
- Initialize prefix at `1` for index `0`, suffix at `1` for index `n-1`

---

## 🧪 Dry Run
`nums = [1,2,3,4]`

- Prefix fill in `res`: `[1, 1, 2, 6]`
- Suffix sweep:
  - suffix=1 → res[3]=6*1=6, suffix=4
  - res[2]=2*4=8, suffix=12
  - res[1]=1*12=12, suffix=24
  - res[0]=1*24=24  
**Result:** `[24,12,8,6]`

---

## 🧱 Implementation
See `solution.cpp` in this folder.

---

## 🔁 Variations to Practice
- Product except self **with division** (handle zeros carefully)
- **Prefix/Suffix** pattern analogs:  
  - Sum except self  
  - Trapping Rain Water (prefix/suffix max)  
  - Left/Right running min/max

---
