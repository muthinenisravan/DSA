// Min Heap using priority_queue
// Used in Top K Frequent Elements, Kth Largest, etc.

#include <queue>
#include <vector>

std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

// Example:
// for (int num : nums) {
//     minHeap.push(num);
//     if (minHeap.size() > k) minHeap.pop();
// }
