# 🚪 Sliding Window Pattern

## 🧩 Pattern Summary
Maintain a window (`[left, right]`) while satisfying a constraint (length, sum, distinct count etc.)
- Shrink/grow window dynamically
- Often used with sets, maps, or frequency arrays

### ⏱️ Typical Complexity
- Time: O(n)
- Space: O(k) or constant

---

## ✅ Common Use Cases
- Subarrays with constraints (length, sum, distinct elements)
- Fixed window of size `k`
- Dynamic window based on condition (like duplicate check)

---

## 🧪 Problems & Notes

| Problem | Description | Key Insight / Trick |
|--------|-------------|----------------------|
| [219. Contains Duplicate II](https://leetcode.com/problems/contains-duplicate-ii/) | Duplicate with index distance ≤ k | Maintain a window of last `k` elements in `unordered_set` |

---

## ⚠️ Common Traps
- Not shrinking window when over size
- Forgetting to erase from set when shrinking
- Off-by-one errors in window size

### ✅ Notes for LC424.Longest Repeating Character Replacement
- Invariant: `(window_len - maxFreq) ≤ k` always holds after the inner while.
- Don’t decrease `maxFreq` on shrink; stale is fine and keeps overall O(n).
- Constant alphabet → use array; otherwise switch to map.



---

## 🔁 Related Patterns
- Hashing (used with `unordered_set` / `unordered_map`)
- Two Pointers (variant of sliding window)
- Monotonic Queue (for sliding max/min problems)
