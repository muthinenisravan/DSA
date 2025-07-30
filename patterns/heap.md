# 🧩 Pattern: Heap / Priority Queue

## 💡 Core Idea:
Use min/max heaps (`priority_queue`) to dynamically track top or bottom elements during iteration, especially when sorting is expensive or streaming is involved.

## 🛠️ Common Use-Cases:
- Top K Frequent Elements
- Kth Largest Element in Array
- Merge K Sorted Lists
- Find Median from Data Stream

## ⚙️ Techniques:
- **Min Heap of size K** → Keeps largest K elements (e.g., top K frequent).
- **Max Heap of size K** → Keeps smallest K elements.
- Use `greater<>` in C++ to make min-heaps with `priority_queue`.
- Always pop when size exceeds `k`.

## 🧠 Time Complexity:
- `O(N log K)` where N is the number of elements and K is heap size.
- Much better than sorting full array when K is small.

## ✅ Related Problems:
| Problem                        | Link                                                                 | Note                             |
|-------------------------------|----------------------------------------------------------------------|----------------------------------|
| Top K Frequent Elements       | [🔗](https://leetcode.com/problems/top-k-frequent-elements)          | Classic min-heap usage           |
| Kth Largest Element in Array  | [🔗](https://leetcode.com/problems/kth-largest-element-in-an-array/) | Straight min-heap size K         |
| Find Median from Data Stream  | [🔗](https://leetcode.com/problems/find-median-from-data-stream/)    | Use 2 heaps to maintain halves   |
| Merge K Sorted Lists          | [🔗](https://leetcode.com/problems/merge-k-sorted-lists/)            | Heap of list heads               |
