#include <bits/stdc++.h>
using namespace std;

// ----------- Approach 1: Multimap (Brute-force Sorting) -----------
// Time: O(n log n), Space: O(n)
// Build frequency map, insert into multimap (auto-sorted by freq), then reverse iterate.
vector<int> topKFrequent_multimap(vector<int>& nums, int k) {
    unordered_map<int, int> freq; // Stores frequency of each number
    multimap<int, int> sorted_freq; // Key: frequency, Value: number (sorted by freq)

    // Step 1: Count frequencies
    for (int num : nums)
        freq[num]++;

    // Step 2: Insert into multimap which keeps frequencies sorted in ascending order
    for (auto& entry : freq)
        sorted_freq.insert({entry.second, entry.first});

    // Step 3: Extract top k elements from multimap in reverse order (highest frequency first)
    vector<int> ans;
    auto itr = sorted_freq.rbegin();  // reverse iterator
    for (int i = 0; i < k && itr != sorted_freq.rend(); ++i, ++itr)
        ans.push_back(itr->second);

    return ans;
}

// ----------- Approach 2: Min Heap (Optimal for large N, small K) -----------
// Time: O(n log k), Space: O(n)
// Maintain a min-heap of size K to store top K frequent elements
vector<int> topKFrequent_heap(vector<int>& nums, int k) {
    unordered_map<int, int> freq; // Frequency map
    // Min-heap storing pairs {frequency, number}
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> minHeap;

    // Step 1: Count frequencies
    for (int num : nums)
        freq[num]++;

    // Step 2: Maintain minHeap of size k
    for (auto& [num, count] : freq) {
        minHeap.push({count, num});
        if (minHeap.size() > k)
            minHeap.pop(); // Remove smallest frequency
    }

    // Step 3: Extract top k elements from heap
    vector<int> ans;
    while (!minHeap.empty()) {
        ans.push_back(minHeap.top().second);
        minHeap.pop();
    }

    return ans;
}

// ----------- Approach 3: Bucket Sort (Optimal when freq range is small) -----------
// Time: O(n), Space: O(n)
// Use bucket sort idea: freq → index in array
vector<int> topKFrequent_bucket(vector<int>& nums, int k) {
    unordered_map<int, int> freq; // Frequency map

    // Step 1: Count frequencies
    for (int num : nums)
        freq[num]++;

    // Step 2: Create buckets where index = frequency, value = list of numbers
    vector<vector<int>> buckets(nums.size() + 1);
    for (auto& [num, count] : freq)
        buckets[count].push_back(num);

    // Step 3: Traverse buckets in reverse to collect top K frequent elements
    vector<int> ans;
    for (int i = buckets.size() - 1; i >= 0 && ans.size() < k; --i) {
        for (int num : buckets[i]) {
            ans.push_back(num);
            if (ans.size() == k)
                break;
        }
    }
    return ans;
}

// ----------- Main Function: Testing All Approaches -----------
int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;

    vector<int> res1 = topKFrequent_multimap(nums, k);
    vector<int> res2 = topKFrequent_heap(nums, k);
    vector<int> res3 = topKFrequent_bucket(nums, k);

    cout << "Multimap: ";
    for (int n : res1) cout << n << " ";

    cout << "\nMinHeap : ";
    for (int n : res2) cout << n << " ";

    cout << "\nBucket  : ";
    for (int n : res3) cout << n << " ";

    cout << endl;
    return 0;
}
