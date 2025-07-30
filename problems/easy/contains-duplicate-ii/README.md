| Field             | Notes                                                                                |
|-------------------|--------------------------------------------------------------------------------------|
| 📌 Problem        | [Contains Duplicate II](https://leetcode.com/problems/contains-duplicate-ii/) - #219 |
| ❓ Tag            | Hashing, Sliding Window |
| 🧠 Pattern        | Track last seen index using map or maintain set within window size k |
| 🐢 Brute Force    | Check abs(i - j) for all pairs → O(n²) |
| 🐇 Optimal        | Map → O(n), O(n). Sliding Window (Set) → O(n), O(k) |
| 🚩 Mistakes       | Returned index instead of bool, didn’t maintain window size |
| 💬 One-liner | Track index or window using hash + logic on distance |
| 🚦 Confidence | 🟢 Green |
