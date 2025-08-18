| Field | Notes |
| --- | --- |
| 📌 Problem | [3Sum](https://leetcode.com/problems/3sum/) |
| 🏷 Type/Tag | Array, Sorting, Two Pointers |
| 🔍 Pattern Used | Sort → fix `i` → two pointers on `[i+1..n-1]`; skip duplicates at `i`, `left`, and `right` |
| 🐢 Brute-force | Triple loop checking all triplets → **O(n³)** time, **O(1)** space |
| 🐇 Optimal Logic | Sort array; for each `i`, run two-pointer for target `-nums[i]`, skipping duplicates → **O(n²)** time, **O(1)** extra space |
| 🚩 Mistakes/Traps | ❗Not skipping duplicates for `i/left/right` → duplicate triplets <br> ❗Off-by-one on pointer moves <br> ❗Forgetting early exit when `nums[i] > 0` (optional micro-opt) |
| 💬 One-liner Summary | After sorting, reduce 3Sum to repeated 2Sum with two pointers; carefully skip duplicates to keep results unique. |
| 🚦 Confidence Level | 🟢 Green |
| 🔁 Related Variations | 3Sum Closest, 4Sum, Two Sum II |
| 🧠 Interview Tips | State de-dup strategy explicitly; justify O(n²) after sort; walk through a duplicate-heavy example (e.g., `[-1,-1,-1,0,1,1]`) to show robust skipping logic. |
| 🧠 Recall Tip | “Sort → for each i: l=i+1, r=n-1 → move l/r by sum; on hit, push & skip dupes on both sides.” |
------------------
