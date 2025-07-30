# 🧩 Pattern: Bucket Sort / Frequency Indexed

## 💡 Core Idea:
If you can bound values (e.g., frequency ≤ N), use fixed-size arrays ("buckets") to sort/group data without heap or full sort.

## 🛠️ Common Use-Cases:
- Frequency sorting
- Counting elements
- Radix sort, Counting sort

## ⚙️ Techniques:
- Build frequency map
- Create array of vectors: `bucket[freq] = list of elements`
- Traverse from highest freq down to extract top results

## 🧠 Time Complexity:
- `O(N)` if values are bounded (like in Top K)

## ✅ Related Problems:
| Problem                        | Link                                                                 | Note                              |
|-------------------------------|----------------------------------------------------------------------|-----------------------------------|
| Top K Frequent Elements       | [🔗](https://leetcode.com/problems/top-k-frequent-elements)          | Bucket sort alternative to heap  |
| Sort Characters by Frequency  | [🔗](https://leetcode.com/problems/sort-characters-by-frequency/)    | Frequency bucket logic            |

