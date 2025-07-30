# 🧠 Hashing Pattern

## 🧩 Pattern Summary
Use a hash-based data structure (`unordered_map` / `unordered_set`) to:
- Track previous occurrences
- Lookup complements or duplicates in **O(1)** time
- Store frequency, index, or any meta-data

### ⏱️ Typical Complexity
- Time: O(n)
- Space: O(n)

---

## ✅ Common Use Cases
- Find duplicates
- Check for complements (like `target - val`)
- Track indices or frequencies
- Fast presence checks

---

## 🧪 Problems & Notes

| Problem | Description | Key Insight / Trick |
|--------|-------------|----------------------|
| [1. Two Sum](https://leetcode.com/problems/two-sum/) | Find 2 indices where `nums[i] + nums[j] == target` | Store seen values in `unordered_map`; check `target - val` |
| [217. Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | Any value appears at least twice | Use `unordered_set` to check if value already seen |
| [219. Contains Duplicate II](https://leetcode.com/problems/contains-duplicate-ii/) | Duplicate with index distance ≤ k | Store value → index in `unordered_map`, OR use sliding window with set |

---

## ⚠️ Common Traps
- Forgetting to update index in map
- Returning indices in wrong order
- Not handling duplicate values
- Not checking `k < 1` in “Nearby Duplicate” type questions

---

## 🔁 Related Patterns
- Sliding Window (when index difference is constrained)
- Prefix Sum (can be combined with hashing)
- Frequency Maps (used in anagram/grouping problems)

