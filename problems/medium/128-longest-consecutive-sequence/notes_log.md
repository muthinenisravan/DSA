| Field                 | Notes                                                                                                                                |
| --------------------- | ------------------------------------------------------------------------------------------------------------------------------------ |
| 📌 Problem            | [Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/)                                          |
| 🏷 Type/Tag           | Array, Hashing, Set, Sequence                                                                                                        |
| 🔍 Pattern Used       | HashSet + Consecutive counting                                                                                                       |
| 🐢 Brute-force        | For each element, scan remaining array for consecutive numbers → O(N²), O(1)                                                         |
| 🐇 Optimal Logic      | Insert all elements into set, iterate, only start counting streak if `num-1` not present, count streak via set lookups → O(N), O(N)  |
| 🚩 Mistakes/Traps     | ❗Edge cases: empty array, single element, duplicates. ❗Not starting streak at `num-1` missing can double count.                      |
| 💬 One-liner Summary  | Find the longest consecutive sequence using a hash set to enable O(1) lookups                                                        |
| 🚦 Confidence Level   | 🟢 Green — solid understanding, dry-run validated                                                                                    |
| 🔁 Related Variations | Maximum Consecutive Ones, Consecutive Numbers II                                                                                     |
| 🧠 Interview Tips     | Always consider starting a streak only at the sequence beginning; avoid unnecessary counting; hash sets simplify duplicate handling. |

