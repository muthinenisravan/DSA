| Field | Notes |
| --- | --- |
| 📌 Problem | [Group Anagrams](https://leetcode.com/problems/group-anagrams/) |
| ❓ Type / Tag | Hashing, Strings, Frequency Count, Grouping |
| 🧠 Pattern Used | HashMap: key = sorted string **or** char frequency vector → value = grouped strings |
| 🐢 Brute Force | Compare each string with all others for anagram match → `O(n² * k)` time |
| 🐇 Optimised | **Hashing based**:① Sort each string: key → sorted word → `O(n * k log k)`② Count each char: key → 26-char freq signature → `O(n * k)` |
| 🔁 Mistakes / Traps | ❗Avoid using string sorting blindly — frequency signature is faster❗Edge case: empty strings / 1-letter words❗Need to use **delimiter** in key like `"#"` to avoid key collision |
| 💬 Summary | Group anagrams by using either sorted string as key or a frequency vector. Sorting is easy, freq-based is optimal |
| 🚦 Confidence | 🟢 Green — fully understood both variations |
| 🛣️ Variations | [Valid Anagram](https://leetcode.com/problems/valid-anagram), [Group Shifted Strings](https://leetcode.com/problems/group-shifted-strings/), [Find All Anagrams](https://leetcode.com/problems/find-all-anagrams-in-a-string/) |
| ♻️ Recall Tup | `Group words where letter composition is same → Normalize via sort or count → Store in map` |
