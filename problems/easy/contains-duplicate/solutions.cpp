class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int val : nums) {
            if (seen.count(val)) return true;
            seen.insert(val);
        }
        return false;
    }
};

