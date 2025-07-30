### 0242. Valid Anagram

- ✅ **Problem**: [Valid Anagram – LeetCode](https://leetcode.com/problems/valid-anagram/)
- 🧠 **First thought**:
  - Sort both strings and compare.
  - ⏱️ Time: O(S log S + T log T),  🧠 Space: O(1)
- 🚀 **Optimal Approach**:
  - Use 2 frequency arrays (26 size).
  - Compare frequency counts for both strings.
  - ⏱️ Time: O(S + T),  🧠 Space: O(1)
- 💬 **One-liner Summary**:
  - Same characters, same frequency → it’s an anagram.
- 🚩 **Mistakes/Traps**:
  - Forgetting to check lengths early.
  - Not handling uppercase/unicode (problem says only lowercase).
- 🧩 **Pattern**: Hashing (Frequency Map)
- 🚦 **Confidence Level**: 🟩 Green
