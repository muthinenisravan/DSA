| Field | Notes |
| --- | --- |
| 📌 Problem | [121. Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) |
| 🏷 Type/Tag | Array, Greedy, Two Pointers / Sliding Window |
| 🔍 Pattern Used | **Prefix-Min (min-so-far)** or **Two-Pointer (l=buy, r=sell)** maintaining `buy` at the minimum seen so far |
| 🐢 Brute-force | For each `i`, try sell at every `j>i`; update max profit → **O(n²)** time, **O(1)** space |
| 🐇 Optimal Logic | Single pass; track `minPrice` (or `l`), at each price `p` compute `p - minPrice` to update `maxProfit`, reset `minPrice` if `p` is smaller → **O(n)** time, **O(1)** space |
| 🚩 Mistakes/Traps | ❗Computing profit before updating `minPrice` in the same step <br> ❗Not resetting buy when a new smaller price appears (`l=r`) <br> ❗Confusing with multiple transactions variant (LC122) |
| 💬 One-liner Summary | Keep the **cheapest buy so far**; at each day, try selling today and update the best profit. |
| 🚦 Confidence Level | 🟢 Green |
| 🔁 Related Variations | Best Time to Buy/Sell II (multiple transactions), with **fee**, with **cooldown**, **k** transactions (DP), Max Subarray (Kadane analogy) |
| 🧠 Interview Tips | State invariant: “`minPrice` is min of seen prices; `maxProfit` best so far.” Prove that resetting buy at a new low can’t miss the optimum. Dry run decreasing and plateau arrays. |
| 🧠 Recall Tip | “Carry the **cheapest ticket** seen; at each stop, check resell value.” |
------------------
