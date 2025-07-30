# Top K Frequent Elements - Leetcode 347
🔗 [LeetCode Problem Link](https://leetcode.com/problems/top-k-frequent-elements/)

---

## 🧠 Problem Statement

Given an integer array `nums` and an integer `k`, return the `k` most frequent elements.  
Return the answer in **any order**.

---

## 🧠 Problem Type:
- Hashmap
- Heap / Priority Queue
- Bucket Sort
- Frequency Counting
- Top-K Pattern

---


## ✅ Approaches Covered:

### 1. Multimap + Frequency Sorting (O(n log n))
- Build frequency map
- Insert into multimap (frequency → number)
- Traverse in reverse (highest freq first)
- Not optimal (O(n log n))

### 2. Min Heap (O(n log k)) ✅ Interview Optimized
- Build frequency map
- Use a min-heap of size k to track top k frequent elements
- Push if heap size < k, or replace if higher frequency
- Pop heap into result

### 3. Bucket Sort (O(n)) ✅ Optimal
- Frequency map
- Buckets indexed by frequency
- Traverse from highest freq bucket to collect top-k
- Watch out: bucket[i] can have multiple elements

---

## 🧾 Pattern Log

| ✅ Pattern Used | 🐢 Brute-force | 🐇 Optimal |
|----------------|---------------|------------|
| Hash + Bucket/Heap | Sort all by frequency | Bucket sort in O(n) |
| 🚩 Mistakes / Traps | Overfilling result in bucket approach | Fixed by checking result size |
| 💬 One-liner | Count frequency and bucket-sort / heapify top-k |
| 🚦 Confidence Level | 🟢 Green |

---

## 🧠 When to Choose Which?

| Scenario | Best Strategy |
|----------|---------------|
| `k << n` | Min-Heap (O(n log k)) |
| `k ≈ n` | Bucket Sort (O(n)) |
| Need sorting among top-k | Use heap with comparator |

---

## ✨ Related Variations

- Top K Frequent Words
- Top K Frequent Elements in Stream
- K Closest Points to Origin (Heap)

