# 3Sum

## 📌 Problem Link
[LeetCode 15 - 3Sum](https://leetcode.com/problems/3sum/)

## 📝 Problem Type
- Array
- Two Pointers
- Sorting
- Hashing (alternative)

## 🚀 Approaches Covered
1. **Brute Force (3 loops)**  
   - Time: `O(n^3)`  
   - Space: `O(1)`  
   - Generate all triplets, check sum = 0, push to answer.

2. **Using HashSet (fix one, solve 2-sum with set)**  
   - Time: `O(n^2)`  
   - Space: `O(n)`  
   - Fix `i`, then run 2-sum with `seen` set.

3. **Optimal: Two Pointers after Sorting**  
   - Time: `O(n^2)`  
   - Space: `O(1)`  
   - Sort, fix one element, use two pointers for 2-sum.

## 🧩 Pattern Details
- **Pattern:** [Two Pointers](../../../patterns/two-pointers.md)  
- Fix one pointer, then use left/right pointers to find complement.  
- Key trick: handle duplicates at all levels (`i`, `left`, `right`).

## ⏱️ Complexity
- **Time:** `O(n^2)`  
- **Space:** `O(1)` (ignoring result)

## 🚩 Mistakes / Traps
- Forgetting to skip duplicates at all three levels (`i`, `left`, `right`).  
- Missing early return when size < 3.  
- Confusion between set-based vs two-pointer approaches.  
- Pushing duplicate triplets into result due to not handling adjacent duplicates.

---
✅ **Summary:** Classic two-pointer + sorting problem. Learn to manage duplicates cleanly.
