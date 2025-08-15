class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num_set(nums.begin(), nums.end());
        int ans = 0;

        for (auto s : num_set) {
            // start of a streak
            if (!num_set.count(s - 1)) {
                int cnt = 1;
                int num = s;
                while (num_set.count(num + 1)) {
                    cnt++;
                    num++;
                }
                ans = max(ans, cnt);
            }
        }

        return ans;
    }
};
