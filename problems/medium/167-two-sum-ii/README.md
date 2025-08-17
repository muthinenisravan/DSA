# Two Sum II – Input Array Is Sorted

**LeetCode:** [https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)  
**Tags:** Array, Two Pointers  
**Difficulty:** Easy

---

## 🧩 Problem
Given a **1-indexed** sorted array `numbers` and a target, return indices `[i, j]` such that `numbers[i] + numbers[j] == target`.  
- Only one valid answer exists.  
- Indices must satisfy `i < j`.

**Example**
```text
Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
💡 Intuition
Use two pointers from both ends. Move pointers inward based on the sum compared to the target.

🔀 Approaches
1) Brute Force
Check all pairs i, j → O(N²) time, O(1) space

2) Two-Pointer Optimal
Start left at 0 and right at N-1

If sum too large → decrement right

If sum too small → increment left

Return indices when sum == target

Time: O(N)
Space: O(1)

⚠️ Edge Cases & Traps
Empty array or single element

Remember 1-based indexing for LeetCode

Off-by-one errors when moving pointers

🔁 Variations to Practice
Two Sum (unsorted array using hashmap)

3Sum, 4Sum

Subarray sum variants
