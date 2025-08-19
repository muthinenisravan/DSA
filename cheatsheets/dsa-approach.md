# 🧭 DSA Core — Data Structures & Patterns (90% Coverage)

A single-page, opinionated README to hit the **must-know Data Structures + Patterns** that cover ~90% of FAANG-style interviews.  
Curated to align with your existing notes/logs (hashing, prefix/suffix, two pointers, etc.).

---

## 📌 How to Use This
1) **Pick a pattern** → 2–3 canonical problems → **master pitfalls** → speed drill.  
2) Keep a tiny **one-liner** per pattern in memory.  
3) Tie back to your solved-problem logs for spaced repetition.

---

## 🧱 Core Data Structures (What to implement cold)

- **Array / String** — prefix/suffix sums, difference arrays, sliding windows.  
- **Hash Map / Hash Set** — frequency counts, index tracking, membership.  
- **Stack / Queue / Deque** — monotonic stack, BFS queue, sliding window max.  
- **Linked List** — reverse, merge, detect cycle (Floyd), K-group ops.  
- **Binary Tree / BST** — DFS traversals, BFS level order, LCA; BST inorder & range queries.  
- **Heap / Priority Queue** — top-K, k-th element, scheduling/merge.  
- **Graph (Adjacency List)** — BFS/DFS, connected components, shortest path (unweighted), **Union-Find (DSU)**.  
- **Matrix / Grid** — treat as graph; boundary checks; multi-source BFS.  

> ⚠️ Pitfalls: off-by-one in prefix/suffix, sliding window boundaries, mutable iteration while modifying sets/maps.

---

## 🧩 Must-Know Patterns (with one-liners & common traps)

### 1) Hashing / Frequency / Set
**One-liner:** “Count or remember; decide in O(1).”  
**Use for:** Two Sum, duplicates, anagrams, longest streaks.  
**Traps:** Wrong key design (e.g., anagram sig), poor window maintenance.

### 2) Two Pointers (Opposite Ends) & Three Pointers
**One-liner:** “Sort (if needed), move the pointer that can improve the objective.”  
**Use for:** Palindrome check, Container With Most Water, 3Sum (fix + 2-ptr).  
**Traps:** Duplicate skipping in 3Sum; pointer move logic.

### 3) Sliding Window
**One-liner:** “Expand until invalid, then shrink to restore validity.”  
**Use for:** Longest substring w/o repeat, min window substring, Contains Duplicate II.  
**Traps:** Off-by-one in window size; forgetting to remove counts to zero.

### 4) Prefix / Suffix (Sums, Products, Max)
**One-liner:** “Precompute left; sweep right with a running suffix.”  
**Use for:** Product Except Self, rain water (prefix/suffix max), range queries.  
**Traps:** Init prefix/suffix to 1/0 correctly; reverse loop bounds.

### 5) Binary Search (Array / Answer Space)
**One-liner:** “Monotonic predicate → mid → shrink to the first true/last false.”  
**Use for:** Search in rotated array, kth capacity, min eating speed.

### 6) Sorting + Greedy
**One-liner:** “Sort to expose local optimal choices.”  
**Use for:** Merge intervals, non-overlapping intervals, meeting rooms.  
**Traps:** Wrong sort key; not proving exchange argument.

### 7) Monotonic Stack
**One-liner:** “Maintain increasing/decreasing stack; pop when order breaks.”  
**Use for:** Next greater element, daily temperatures, largest rectangle in histogram.  
**Traps:** Equal-element policy, sentinel trick for histogram.

### 8) Linked List Ops
**One-liner:** “Cut, reverse, stitch; slow/fast for cycle & middles.”  
**Use for:** Reverse list, reorder list, merge K lists (heap), detect cycle.

### 9) Tree DFS/BFS + Recursion
**One-liner:** “Return what parent needs (height/sum/bool) from children.”  
**Use for:** Max depth, diameter, path sum, LCA.  
**Traps:** Base case nulls; postorder vs preorder needs.

### 10) Graph Traversals + Union-Find
**One-liner (BFS/DFS):** “Visit/mark; push neighbors if valid.”  
**One-liner (DSU):** “Union components; check connectivity as you go.”  
**Use for:** Number of Islands, Clone Graph, cycle detection.

### 11) Heap / Top-K
**One-liner:** “Bound the structure to K; push/pop to maintain.”  
**Use for:** Top K frequent, kth largest, merge K lists.  
**Traps:** k==0; duplicates; wrong heap type.

### 12) Backtracking
**One-liner:** “Choose → explore → un-choose; prune early.”  
**Use for:** Subsets, permutations, combinations, N-Queens.  
**Traps:** Not cloning/restoring state; ordering duplicates.

---

## 🧪 Canonical Problem Map (by Pattern)

| Pattern | Go-to Problems |
|---|---|
| Hashing | Two Sum, Contains Duplicate I/II, Valid/Group Anagram, Longest Consecutive Sequence |
| Two Pointers | Valid Palindrome, Two Sum II (sorted), 3Sum, Container With Most Water |
| Prefix/Suffix | Product of Array Except Self, Trapping Rain Water |
| Binary Search | Search Rotated Array, First Bad Version, Min Eating Speed |
| Greedy + Sort | Merge Intervals, Non-overlapping Intervals, Meeting Rooms |
| Monotonic Stack | Daily Temperatures, Next Greater Element, Histogram Area |
| Linked List | Reverse List, Detect Cycle, Merge K Lists |
| Trees | Max Depth, Diameter, LCA, Path Sum |
| Graphs/DSU | Number of Islands, Clone Graph, Course Schedule, Redundant Connection |
| Heap/Top-K | Kth Largest, Top K Frequent Elements |
| Backtracking | Subsets, Permutations, Combination Sum, N-Queens |

---

## ⚠️ Common Traps (Keep a Checklist)

- **Prefix/Suffix:** wrong initial values; reverse pass off-by-one.  
- **Sliding Window:** forgetting to shrink; not deleting zero-count keys.  
- **Two Pointers:** duplicate handling in 3Sum; moving the wrong pointer.  
- **Greedy:** unproven strategy; incorrect sort key.  
- **Graphs:** not marking visited early; missing bounds in grids.  
- **Heaps:** mixing min/max semantics; not bounding to K.  

---

## 🗺️ Minimal Study Plan (4 Loops)

1) **Loop A — Arrays & Hashing (7–10 problems):** Two Sum family, anagrams, duplicates, longest streak.  
2) **Loop B — Pointers & Prefix/Suffix (8–10):** Valid Palindrome, Two Sum II, 3Sum, Container, Product Except Self, Rain Water.  
3) **Loop C — Stacks/Greedy/BS (8–10):** Daily Temps, Histogram, intervals, BS on answers.  
4) **Loop D — Trees/Graphs/DP (10–12):** DFS/BFS staples, DSU, 1D/2D DP basics.

---

## 🧾 Quick Reference One-Liners

- **Hashing:** map/set it or forget it (O(1) lookups).  
- **Sliding Window:** expand → while invalid shrink → record.  
- **Two Pointers:** move the pointer that can improve the metric.  
- **Prefix/Suffix:** left products in res; multiply by running suffix.  
- **Binary Search:** monotonic predicate → first true.  
- **Monotonic Stack:** pop while order breaks; process indices.  
- **Heap Top-K:** keep size K; push/pop to maintain.  
- **DFS Trees:** return to parent exactly what it needs.  
- **BFS:** level by level; good for shortest paths (unweighted).  
- **Union-Find:** union components; check if u and v collide.

---

## 🔗 Pinned Internal References

- **Hashing Patterns Cheat** — quick tricks + pitfalls (duplicate-k distance, anagrams, freq arrays).  
- **Solved Problem Log (index)** — mastered problems by pattern.  
- **Product of Array Except Self** — canonical prefix/suffix walkthrough with traps.

---
