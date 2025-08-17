# 🧩 DSA Patterns Index

A categorized collection of common problem-solving patterns used in NeetCode 150 and top interview questions. Each pattern includes template strategies, time complexity tips, and linked problems.

---

## 🧠 Pattern Categories

| #  | Pattern Name             | Description                                                       |
|----|--------------------------|-------------------------------------------------------------------|
| 1  | [Hashing](hashing.md)              | Use hash maps/sets for fast lookup, frequency count, or grouping     |
| 2  | [Sliding Window](sliding-window.md)| Optimize subarray problems using a window that expands/contracts    |
| 3  | [Heap / Priority Queue](heap.md)   | Use min/max heaps for Top-K, streaming, and greedy element access   |
| 4  | [Bucket Sort / Frequency Indexed](bucket-sort.md) | Replace sorting with frequency-indexed arrays when data is bounded |
| 5  | [prefix-suffix](prefix-suffix-product.md) | Compute result per index using product of elements before & after without division.|
| 6  | [two-pointers](two-pointers.md) | use 2 indices/pointers to move and solve problem efficiently based on condition. |
---

## 🧩 Quick Additions Coming Soon

| Pattern                     | Description                                      |
|----------------------------|--------------------------------------------------|
| Two Pointers               | For sorted arrays, subarrays, and linked lists   |
| Binary Search              | Over sorted data or on answer space              |
| Monotonic Stack / Queue    | For next greater/smaller element logic           |
| DFS / BFS / Graph Traversal| Explore neighbors, backtracking, level-order etc |
| Backtracking               | Try all combinations with pruning                |
| Greedy                     | Optimal local decisions for global optimum       |
| Trie / Prefix Tree         | Store and search strings efficiently             |
| Union-Find / DSU           | Track disjoint sets (useful in graphs)           |

---

### 🔧 Usage

Each pattern file:
- Explains the **core idea**
- Lists **template tricks**
- Gives **real LC problem links**
- Mentions **time complexity patterns**

This helps you quickly recall and apply the right tool during interviews.

---
## Template for each pattern
## 🧠 DSA Pattern Template

Use this format for every pattern file (`/patterns/*.md`) to ensure consistency and fast recall.

---

### 🧩 Pattern Name: e.g., Hashing

#### 🔍 Problem Traits
- Unordered lookup needed
- Frequency count or pairing
- Quick existence or counting

#### 💡 Core Idea
- Use `unordered_map` / `unordered_set` for O(1) average lookups
- Key technique: `target - x`, frequency tracking, grouping

#### 📦 STL Template
```cpp
unordered_map<int, int> freq;
for (int x : nums) freq[x]++;

**Tip:** Link these patterns in each problem's `README.md` under “Pattern Used” for lightning-fast lookup.
