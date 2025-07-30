// Frequency count using unordered_map
// Used in anagram, duplicate, top-k problems

#include <unordered_map>
#include <vector>

std::unordered_map<int, int> freq;
for (int num : nums) {
    freq[num]++;
}
