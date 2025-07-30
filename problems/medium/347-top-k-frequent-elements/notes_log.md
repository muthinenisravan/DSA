# 📓 Notes Log — Top K Frequent Elements (LC 347)

---

## 🔖 Tags

- Array
- Hash Table
- Heap (Priority Queue)
- Bucket Sort
- Top-K Pattern

---

## 🧠 Pattern Applied

> **Top-K with Hashing + Min Heap / Bucket Sort**

This is a classic application of the **Top-K elements** pattern combined with frequency counting. Hash map for counting, and either:
- A **min heap** to maintain top K frequent elements efficiently.
- Or a **bucket sort** for linear time when N is large.

---

## 🐢 Brute Force

- Count frequency → sort entire array based on frequency → return top K.
- Time: `O(N log N)`

---

## 🐇 Optimal Approaches

### ✅ Min Heap
- Count frequency in a hashmap.
- Push pairs `{freq, num}` into a **min-heap** of size K.
- If heap size exceeds K, pop the smallest.
- Extract results from heap.
- Time: `O(N log K)`, Space: `O(N)`

### ✅ Bucket Sort
- Count frequencies.
- Make a vector of N+1 buckets (bucket[i] holds elements with frequency `i`).
- Traverse from highest frequency down, and collect elements until K are gathered.
- Time: `O(N)`, Space: `O(N)`

---

## 🚩 Mistakes / Tricky Parts

- Choosing between Min-Heap and Bucket Sort — depends on K vs N.
- Remember: Max frequency is at most N → fixed-size bucket.
- Sorting hash map directly gives `O(N log N)` — avoid unless explicitly needed.
- Edge case: what if multiple elements share same frequency? Order doesn't matter but code must be safe.

---

## 💬 One-liner Summary

> Count frequencies using a map, then use either a heap or bucket sort to extract the top K frequent elements.

---

## 🚦 Confidence Level

🟢 Green — clear pattern, multiple valid solutions, well-known approaches.

---

## 🧠 Variations To Practice

| Problem | Description |
|--------|-------------|
| [692. Top K Frequent Words](https://leetcode.com/problems/top-k-frequent-words/) | Similar but uses lexical sorting |
| [451. Sort Characters by Frequency](https://leetcode.com/problems/sort-characters-by-frequency/) | Variation with string + frequency |
| [215. Kth Largest Element](https://leetcode.com/problems/kth-largest-element-in-an-array/) | Min heap for top K, single result |
| [973. K Closest Points to Origin](https://leetcode.com/problems/k-closest-points-to-origin/) | Heap + distance calculation |

---

## 🛠️ Next Steps

- [ ] Implement both Min-Heap and Bucket Sort versions
- [ ] Dry-run with edge cases
- [ ] Link to `patterns/top-k-frequent.md` once created
