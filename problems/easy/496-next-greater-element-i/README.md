# 496. Next Greater Element I

**LeetCode:** https://leetcode.com/problems/next-greater-element-i/  
**Tags:** Monotonic Stack, HashMap  
**Difficulty:** Easy

---

## 🧩 Problem
You are given two arrays `nums1` and `nums2`, where `nums1` is a subset of `nums2`.  
For each element in `nums1`, find the **next greater element** in `nums2`.  
If no such element exists, return `-1`.

---

## 💡 Intuition
Brute force would be: for each element in `nums1`, look to its right in `nums2`.  
But this is **O(m*n)**.  
Instead: preprocess `nums2` using a **monotonic decreasing stack** → directly know the next greater for each value.

---

## 🔀 Approaches

### 1) Brute Force
- For each `x` in `nums1`, find its index in `nums2` then scan right until greater.
- **Time:** O(m*n)  
- **Space:** O(1)

### 2) Monotonic Stack + HashMap (Optimal)
- Traverse `nums2` left→right.  
- Maintain stack of decreasing values.  
- For each new number, pop smaller ones and map their next greater to current.  
- Leftovers → -1.  
- Finally, answer nums1 queries from map.  
- **Time:** O(n+m)  
- **Space:** O(n)

---

## ⏱️ Complexity
- **Time:** O(n+m)  
- **Space:** O(n)

---

## ⚠️ Edge Cases & Traps
- nums1 values always in nums2 → safe to use hashmap lookup.  
- Must use `<` not `<=` in pop condition for uniqueness.  
- Leftover stack elements must be mapped to `-1`.  
- Don’t mutate nums2 if needed again.

---

## 🧪 Dry Run
nums1 = [4,1,2], nums2 = [1,3,4,2]  

- Process 1 → push [1]  
- Process 3 → pop 1 (next[1]=3), push [3]  
- Process 4 → pop 3 (next[3]=4), push [4]  
- Process 2 → push [4,2]  
- End → next[4]=-1, next[2]=-1  

Map = {1→3, 3→4, 4→-1, 2→-1}  
Answer = [-1, 3, -1]

---

## 🧱 Implementation
See `solution.cpp` in this folder.

---

## 🔁 Variations to Practice
- Next Greater Element II (circular array)  
- Daily Temperatures (span until warmer day)  
- Stock Span Problem  
- Largest Rectangle in Histogram  
