# Longest Consecutive Sequence

**Leetcode:** [🔗](https://leetcode.com/problems/longest-consecutive-sequence/)

---

## Problem Summary
Given an unsorted array of integers, return the length of the longest consecutive elements sequence. Must run in O(n) time.

---

## Solutions

### Optimal Solution: HashSet
- Store all elements in an unordered_set.
- Only start a sequence if `num-1` is not in the set.
- Count consecutive elements to find max streak.

**Time Complexity:** O(n)  
**Space Complexity:** O(n)

### Brute Force
- For each element, check for consecutive elements by scanning the array.
- Complexity: O(n²) time, O(1) space.

### Sorting
- Sort the array, then scan for consecutive elements.
- Complexity: O(n log n) time, O(1) space.

---

## Notes / Tips
- Track only sequence starts (`num-1` not in set) to avoid redundant work.
- Handle empty array and duplicates properly.
- HashSet approach is optimal and avoids sorting.

---

## Related Problems / Variations
- Longest consecutive subsequence variations with constraints.
- Range query problems on consecutive elements.

---

## Solution File
[solution.cpp](./solution.cpp)
