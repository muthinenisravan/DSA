| Field | Notes |
| --- | --- |
| 📌 Problem | [Container With Most Water](https://leetcode.com/problems/container-with-most-water/) |
| 🏷 Type/Tag | Array, Two Pointers, Greedy |
| 🔍 Pattern Used | Two pointers at ends; compute area, then move the pointer at the **shorter** height inward |
| 🐢 Brute-force | Check all pairs `(i, j)`: area = `(j - i) * min(h[i], h[j])` → **O(n²)** time, **O(1)** space |
| 🐇 Optimal Logic | While `left < right`: `area = (right-left) * min(h[left], h[right])`; update max; move shorter side (`++left` if `h[l] < h[r]` else `--right`) → **O(n)** time, **O(1)** space |
| 🚩 Mistakes/Traps | Using `while (left <= right)`; moving the taller pointer; updating pointers **before** computing area; forgetting width is `right - left` |
| 💬 One-liner Summary | Maximize `width * min(height)` by moving the pointer at the smaller height inward each step. |
| 🚦 Confidence Level | 🟢 Green |
| 🔁 Related Variations | Trapping Rain Water (two pointers), 3Sum (two pointers after sort), Boats to Save People (greedy two pointers) |
| 🧠 Interview Tips | Justify why moving the shorter bar is safe (min height is the bottleneck); show a quick counterexample if moving taller; confirm `O(n)` and `O(1)`; handle trivial n=2 case mentally |
| 🧠 Recall Tip | “Area first, then move **shorter** pointer; loop `left < right`.” |
