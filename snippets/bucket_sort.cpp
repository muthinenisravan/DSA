// Bucket Sort template for frequency-grouped elements
// Used in problems like Top K Frequent Elements

#include <vector>
#include <unordered_map>

void bucketSortExample(const std::vector<int>& nums, int k) {
    std::unordered_map<int, int> freq;
    for (int num : nums) freq[num]++;

    std::vector<std::vector<int>> buckets(nums.size() + 1);
    for (auto& [num, f] : freq)
        buckets[f].push_back(num);

    std::vector<int> result;
    for (int i = nums.size(); i >= 0 && result.size() < k; --i) {
        for (int n : buckets[i])
            result.push_back(n);
    }
}
