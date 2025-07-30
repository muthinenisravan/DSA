### 0242. Valid Anagram
| Field               | Notes                                                                 |
|---------------------|------------------------------------------------------------------------|
| 📌 Problem           | [Valid Anagram](https://leetcode.com/problems/valid-anagram)          |
| ❓ Type / Tag        | String, Hashing, Frequency Array                                       |
| 🧠 Pattern Used      | Frequency array (size 26) or sort + compare                            |
| 🐢 Brute Force       | Generate all permutations → `O(n!)`                                    |
| 🐇 Optimised         | Sort + compare → `O(n log n)` time, `O(1)` space <br> Frequency count → `O(n)` time, `O(1)` space |
| 🔁 Mistakes / Traps  | ❗ Missed length check <br> ❗ Forgot to reset count array in test cases |
| 💬 Summary           | Two anagrams → same frequency map or same sorted form                 |
| 🚦 Confidence        | 🟢 Green — multiple clear strategies known                             |
| 🛣️ Variations        | Group Anagrams, Anagram Substrings, Unicode-aware Anagram             |
| 🔁 Recall Tip        | For lowercase only: 26-size array is fastest; Unicode? Use hashmap     |
