| Field | Notes |
| --- | --- |
| 📌 Problem | [424. Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/) |
| 🏷 Type/Tag | String, Sliding Window, Frequency |
| 🔍 Pattern Used | Sliding window with **freq[26]** and running **maxFreq**; keep window valid if `(len - maxFreq) ≤ k` |
| 🐢 Brute-force | For each substring, count most frequent char and check if replacements ≤ `k` → **O(n³)** naive (or **O(n²·Σ)** if you maintain counts as you expand `r`) |
| 🐇 Optimal Logic | Expand `r`, update `freq` & `maxFreq`. While `(window_len - maxFreq) > k`, shrink from `left`. Track best length → **O(n)** time, **O(1)** space (Σ=26) |
| 🚩 Mistakes/Traps | ❗Trying to decrement `maxFreq` on shrink (breaks O(n)) <br> ❗Using condition `>= k` instead of `> k` <br> ❗Assuming only 2 distinct chars (works for any count) |
| 💬 One-liner Summary | “Grow window; if more than `k` non-majority chars, shrink. Answer is max valid window length.” |
| 🚦 Confidence Level | 🟢 Green |
| 🔁 Related Variations | Longest Substring with at most **k** distinct, Character Replacement (lowercase / general alphabet), Longest Substring Without Repeat |
| 🧠 Interview Tips | State invariant: window always satisfies `replacements_needed ≤ k`. Explain why stale `maxFreq` is safe and keeps complexity linear. |
| 🧠 Recall Tip | `len - maxFreq ≤ k` ⇒ window OK. |
------------------

