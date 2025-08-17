| Field                 | Notes                                                                                                   |
| --------------------- | ------------------------------------------------------------------------------------------------------- |
| 📌 Problem            | [Valid Palindrome](https://leetcode.com/problems/valid-palindrome)                                      |
| 🏷 Type / Tag         | String, Two Pointers, Alphanumeric Check                                                                |
| 🔍 Pattern Used       | Two pointers from both ends, skip non-alphanumeric, lowercase comparison                                |
| 🐢 Brute-force        | Create cleaned string with only lowercase alphanumerics, compare with reverse → O(N) time, O(N) space   |
| 🐇 Optimal Logic      | Two-pointer in-place, skip non-alphanumerics, compare lowercase → O(N) time, O(1) space                 |
| 🚩 Mistakes/Traps     | ❗ Forgetting to skip non-alphanumerics ❗ Not normalizing case ❗ Off-by-one errors at left/right indices |
| 💬 One-liner Summary  | Check palindrome in-place ignoring non-alphanumerics and case                                           |
| 🚦 Confidence Level   | 🟢 Green — edge cases handled, in-place efficient                                                       |
| 🔁 Related Variations | Longest Palindromic Substring, Valid Palindrome II                                                      |
| 🧠 Interview Tips     | Clarify constraints (alphanumeric, case), discuss brute-force vs in-place, emphasize O(1) space         |
