# Two Pointers Pattern

💡 Core Idea:
Use two indices moving from opposite ends (or same direction) to solve problems efficiently, often for strings, arrays, or windows.

🛠️ Common Use-Cases:
- Palindrome checks (ignore case, non-alphanumeric)
- Partitioning problems
- Subarray/subsequence scans
- Sliding window variations
- You have a sorted array or string (not always, but very common).
- You need to find pairs or triplets that satisfy some condition (sum, difference, product, etc.).
- You need to process from both ends toward the middle.
- You want to reduce time complexity (brute force = O(n²), two pointers often = O(n)).

⚙️ Techniques:
- Initialize `left` and `right` pointers
- Move pointers based on condition
- Skip unwanted elements if necessary
- Compare or accumulate values as required

🧠 Time Complexity:
- O(N) in most string/array traversal problems

✅ Related Problems:
| Problem | Link | Note |
|---------|------|------|
| Valid Palindrome | [🔗](../problems/easy/valid-palindrome/README.md) | Skip non-alphanumerics, compare lowercase |
| two-sum-ii-sorted Array | [🔗](../problems/medium/167-two-sum-ii/README.md) | use 2 indices, binary search for target|
| Longest Palindromic Substring | 🔗 | Expand around center technique |
| Valid Palindrome II | 🔗 | At most one character removal allowed |
