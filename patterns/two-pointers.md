# Two Pointers Pattern

💡 Core Idea:
Use two indices moving from opposite ends (or same direction) to solve problems efficiently, often for strings, arrays, or windows.

🛠️ Common Use-Cases:
- Palindrome checks (ignore case, non-alphanumeric)
- Partitioning problems
- Subarray/subsequence scans
- Sliding window variations

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
| Longest Palindromic Substring | 🔗 | Expand around center technique |
| Valid Palindrome II | 🔗 | At most one character removal allowed |
