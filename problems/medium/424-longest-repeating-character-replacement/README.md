# 424. Longest Repeating Character Replacement

**LeetCode:** https://leetcode.com/problems/longest-repeating-character-replacement/  
**Tags:** String, Sliding Window, Frequency  
**Difficulty:** Medium

---

## 🧩 Problem
Given a string `s` (uppercase A–Z) and an integer `k`, you may change **at most `k`** characters in a substring so that all characters in that substring are the same.  
Return the **maximum length** of such a substring.

---

## 💡 Intuition
In any window `[left..right]`, let `maxFreq` be the count of the most frequent character.  
To make the whole window equal, we must replace the **other** characters: `replacements_needed = window_len - maxFreq`.  
The window is **valid** if `replacements_needed ≤ k`.

So: expand the window, track frequencies and `maxFreq`. If the window becomes invalid, shrink from the left until valid again.

---

## 🔀 Approaches

### 1) Brute Force (baseline)
Enumerate all substrings, compute the frequency of the most common char, check if `len - maxFreq ≤ k`.
- **Time:** O(n³) (or O(n²·Σ) with maintained counts)
- **Space:** O(1)

### 2) Sliding Window (Optimal)
- Keep `int freq[26] = {0};`, `int maxFreq = 0;`, `left = 0;`, `ans = 0`.
- For each `right`:
  - Increment `freq[s[right]]`, update `maxFreq`.
  - While `(right - left + 1) - maxFreq > k`, decrement `freq[s[left]]`, `++left`.
  - Update `ans = max(ans, right - left + 1)`.
- **Time:** O(n) (each index enters and leaves window once)  
- **Space:** O(1) (constant alphabet)

**Invariant:** The current window always satisfies `window_len - maxFreq ≤ k`.

**Why stale `maxFreq` works:** We never decrease `maxFreq` on shrink. That can only make the condition **easier** to satisfy temporarily; `ans` is still valid because we only record sizes of windows that passed the check. On future expansions, `maxFreq` catches up again. This avoids O(n²) behavior.

---

## ⏱️ Complexity
- **Time:** O(n)  
- **Space:** O(1)

---

## ⚠️ Edge Cases & Traps
- `k = 0` → longest block of identical chars  
- `k ≥ n` → return `n`  
- Works for strings with **any** number of distinct characters (not just 2).  
- Don’t decrement `maxFreq` when shrinking.

---

## 🧪 Dry Runs
`s = "AABABBA", k = 1`  
- Best window `"AABA"` or `"ABBA"` → length **4**.

`s = "ABBCCDD", k = 2`  
- Best window like `"BBCC"` or `"CCDD"` → length **4**.

---

## 🧱 Implementation
See `solution.cpp` in this folder.

---

## 🔁 Variations to Practice
- Lowercase / full ASCII / Unicode (switch to map if alphabet not constant)  
- Longest substring with at most **k distinct** characters  
- Replace at most `k` to get alternating patterns
