# 3. Longest Substring Without Repeating Characters

**LeetCode:** https://leetcode.com/problems/longest-substring-without-repeating-characters/  
**Tags:** String, Sliding Window, Hashing  
**Difficulty:** Medium

---

## 🧩 Problem
Given a string `s`, return the **length** of the longest substring without repeating characters.

---

## 💡 Intuition
Maintain a **window** of unique characters.  
When a duplicate arrives at the right end, **move the left boundary** to keep the window valid.  
Two implementations:
- **Set-based window**: shrink from the left until the duplicate leaves.
- **Last-seen index map (jumping left)**: jump `left` directly to `last[c] + 1` if `c` repeats inside the window.

---

## 🔀 Approaches

### 1) Brute Force (baseline)
Enumerate all substrings and check uniqueness.
- **Time:** O(n³) if you scan each substring for duplicates
- **Space:** O(1)

(Improved baseline: For each start `i`, extend `j` while adding to a set; stop at first repeat → **O(n²)** time.)

### 2) Sliding Window — Set-based
- Keep `unordered_set<char>` or `bool seen[256]`.
- Expand `r`; while `s[r]` is in the set → remove `s[left]`, `++left`.
- Update `ans = max(ans, r - left + 1)`.
- **Time:** O(n) (each char enters & leaves once)  
- **Space:** O(min(n, Σ))

### 3) Sliding Window — Last-seen Index (Preferred)
- Keep `last[Σ]` initialized to `-1` (for ASCII use size 128/256).
- For each `r`, `c = s[r]`:
  - If `last[c] >= left`, set `left = last[c] + 1`.
  - Update `last[c] = r`, `ans = max(ans, r - left + 1)`.
- **Time:** O(n)  
- **Space:** O(min(n, Σ))

**Invariant:** `s[left..r]` is always a substring with **all unique** characters.

---

## ⏱️ Complexity
- **Time:** O(n)  
- **Space:** O(min(n, Σ)) (Σ = alphabet size; ASCII → constant)

---

## ⚠️ Edge Cases & Traps
- Empty string `""` → `0`
- All same char `"aaaa"` → `1`
- `"abba"` → `2` (careful: update `left` before `ans`)
- Cast to `unsigned char` when indexing arrays to avoid negative indices on platforms with signed `char`.

---

## 🧪 Dry Runs
`"abcabcbb"`  
- Best window `"abc"` → length `3`.

`"pwwkew"`  
- Best window `"wke"` → length `3` (not `"pwke"` since substrings must be **contiguous**).

---

## 🧱 Implementation
See `solution.cpp` in this folder.

---

## 🔁 Variations to Practice
- Longest Substring with at most **k distinct** characters  
- Longest Substring with at most **k** replacements (Character Replacement)  
- Return the **substring itself** (track best `(start, length)`)
