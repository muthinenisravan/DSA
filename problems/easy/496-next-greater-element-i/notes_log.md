# Next Greater Element I — Log

| Field | Notes |
| --- | --- |
| 📌 Problem | [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/) |
| ❓ Type / Tag | Monotonic Stack, HashMap |
| 🧠 Pattern Used | Build a **monotonic decreasing stack** on nums2 to precompute each element’s next greater |
| 🐢 Brute Force | For each element in nums1, scan rightward in nums2 → **O(m*n)** |
| 🐇 Optimised | Use stack + hashmap: each element pushed/popped once → **O(n+m)** |
| 🔁 Mistakes / Traps | Forgetting that nums1 ⊆ nums2 and values are unique; mutating nums2 in-place; off-by-one in stack pops; confusing value vs index stack |
| 💬 One-liner Summary | “Pop smaller guys until stack is happy; map their next greater = current.” |
| 🚦 Confidence | 🟢 Green |
| 🧷 Recall Tip | Stack = decreasing; pop until top ≥ current; leftovers = -1 |
