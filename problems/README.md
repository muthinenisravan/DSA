# 📘 Problem Logs

Track of all solved problems with pattern, difficulty, and notes.

---

## ✅ Completed Problems
| #  | Problem                  | Leetcode Link                                               | Pattern               | Difficulty | Notes                                                                                   |
|----|--------------------------|------------------------------------------------------------|----------------------|------------|-----------------------------------------------------------------------------------------|
| 1  | Two Sum                  | [🔗](https://leetcode.com/problems/two-sum/)               | Hashing              | Easy       | Classic `target - x` lookup using map [View](./easy/two_sum/README.md)                 |
| 2  | Contains Duplicate       | [🔗](https://leetcode.com/problems/contains-duplicate/)   | Hashing              | Easy       | Simple set-based duplicate check [View](./easy/contains-duplicate/README.md)           |
| 3  | Contains Duplicate II    | [🔗](https://leetcode.com/problems/contains-duplicate-ii/)| Hashing, Sliding Window| Easy      | Index vs distance tradeoff; 2 approaches used [View](./easy/contains-duplicate-ii/README.md) |
| 4  | Valid Anagram            | [🔗](https://leetcode.com/problems/valid-anagram/)        | Hashing              | Easy       | Compare sort vs frequency array for anagram detection [View](./easy/242-valid-anagram/README.md) |
| 5 | Group Anagrams            | [🔗](https://leetcode.com/problems/group-anagrams)        | Hashing              | Medium       | HashMap: key = sorted string or char frequency vector → value = grouped strings [View](./medium/49-group-anagrams/README.md) |
| 6  | Top K Frequent Elements  | [🔗](https://leetcode.com/problems/top-k-frequent-elements/)| Hashing, Heap, Bucket | Medium   | Frequency map + heap or bucket approach [View](./easy/347-top-k-frequent-elements/README.md) |
| 7  | Valid Sudoku             | [🔗](https://leetcode.com/problems/valid-sudoku/)         | Hashing, Matrix       | Medium     | Row/col/box uniqueness validation [View](./medium/36-valid-sudoku/README.md)               |
| 8  | Product of Array Except Self | [🔗](https://leetcode.com/problems/product-of-array-except-self/) | Prefix/Suffix Arrays  | Medium     | Prefix & suffix products; in-place optimization [View](./medium/238-product-of-array-except-self/README.md) |
| 9  | Longest Consecutive Sequence | [🔗](https://leetcode.com/problems/longest-consecutive-sequence/) | Hashing, Set          | Medium     | Track sequences only from start of streaks using HashSet [View](./medium/128-longest-consecutive-sequence/README.md) |
| 10  | Valid Palindrome | [🔗](https://leetcode.com/problems/valid-palindrome) | two pointers       | easy     | Two pointers from both ends, skip non-alphanumeric, lowercase comparison [View](./easy/125-valid-palindrome/README.md) |
| 11 | two-sum-ii-sorted Array | [🔗](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted) | two pointers       | medium     | Two pointers from both ends, do binary search for target [View](./medium/167-two-sum-ii/README.md) |
| 12  | 3Sum | [🔗](https://leetcode.com/problems/3sum/) | Sorting, Two Pointers | Medium | Sort + fix + two-pointers; skip duplicates ([View](./medium/15-3sum/README.md)) |
| 13 | Container With Most Water                   | [🔗](https://leetcode.com/problems/container-with-most-water/) | Two Pointers, Greedy             | Medium     | Move the shorter pointer inward; area = width * min(height)    [View](./medium/11-container-with-most-water/README.md)     |
---

## 🔄 Next Steps

- Add new problems as you solve them.
- Cross-link pattern folders when applicable.
- Use this table for spaced revision & filtering.
