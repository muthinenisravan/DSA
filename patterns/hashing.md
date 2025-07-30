# Hashing Patterns (Frequency, Set, Map)

## ✅ Core Idea:
Use a hash map or frequency counter to track occurrences, positions, or window uniqueness.

---

### 🔁 Quick Pattern Summaries

| Pattern / Problem Type             | Trick / One-liner                                       |
|-----------------------------------|---------------------------------------------------------|
| Duplicate Detection (k distance)  | Use `unordered_set` as sliding window (size ≤ k)        |
| Index Tracking                    | Use `unordered_map<val, index>` to track last seen      |
| Anagram (valid or group)          | Compare frequency array or sorted strings               |
| Hash Map as Counter               | `unordered_map<char/int, int>` for frequency counting   |

---

### ✅ Common Tips

- Use `unordered_map` or `unordered_set` unless ordering is needed.
- For lowercase letters only → `int freq[26]` is faster than map.
- Always check constraints before using full hash maps.
- Watch for off-by-one in sliding window boundaries.

---

### 📦 Problems Covered

- 0001. Two Sum → index tracking via `unordered_map`
- 0217. Contains Duplicate → frequency / set check
- 0219. Contains Duplicate II → sliding window `unordered_set`
- 0242. Valid Anagram → frequency array or sorted strings

---
