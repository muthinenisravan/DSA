# Product of Array Except Self — Log

| Field | Notes |
| --- | --- |
| 📌 Problem | [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/) |
| ❓ Type / Tag | Array, Prefix/Suffix Product |
| 🧠 Pattern Used | Build **prefix** in result; **multiply** by running suffix in reverse pass |
| 🐢 Brute Force | For each `i`, multiply all `j ≠ i` → **O(n²)** time, **O(1)** space |
| 🐇 Optimised | Two-pass prefix/suffix: **O(n)** time, **O(1)** extra space (excluding output) |
| 🔁 Mistakes / Traps | Off-by-one in reverse loop; forgetting suffix init `=1`; mutating input before using it |
| 💬 One-liner Summary | “Left pass writes prefix, right pass multiplies suffix.” |
| 🚦 Confidence | 🟢 Green |
| 🧷 Recall Tip | Prefix into `res`, suffix as scalar → multiply and move. |
