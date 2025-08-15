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
🛠️ Common Use-Cases:
- Detect duplicates
- Count frequency
- Consecutive sequences
- Membership checks in O(1)

⚙️ Techniques:
- Insert elements into HashSet
- Iterate each element, only start streak if element-1 is not in set
- Expand streak by checking element+1, element+2, ...

🧠 Time Complexity:
- O(N) for inserting N elements into HashSet
- O(N) for iterating and building sequences

✅ Related Problems:
Problem                        | Link | Note
--------------------------------|------|------------------------------------------------
Contains Duplicate               | 🔗   | Simple duplicate check with HashSet
Contains Duplicate II            | 🔗   | Sliding window + HashSet
Valid Anagram                    | 🔗   | Frequency map using Hash
Top K Frequent Elements           | 🔗   | Frequency map for heap or bucket
Longest Consecutive Sequence      | 🔗   | HashSet to track starts of sequences
