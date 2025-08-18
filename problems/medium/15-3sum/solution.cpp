#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void twoPointerSearch(vector<int>& nums, int start, vector<vector<int>>& ans, int target) {
        int left = start + 1;
        int right = nums.size() - 1;

        while (left < right) {
            int sum = nums[start] + nums[left] + nums[right];

            if (sum == target) {
                ans.push_back({nums[start], nums[left], nums[right]});
                left++;
                right--;

                // Skip duplicates on both sides
                while (left < right && nums[left] == nums[left - 1]) left++;
                while (left < right && nums[right] == nums[right + 1]) right--;
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        if (nums.size() < 3) return ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // skip duplicate i
            twoPointerSearch(nums, i, ans, 0);
        }

        return ans;
    }
};
