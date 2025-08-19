#include <bits/stdc++.h>
using namespace std;

// Brute Force O(m*n)
class SolutionBrute {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> pos;
        for (int i = 0; i < nums2.size(); i++) pos[nums2[i]] = i;

        vector<int> ans;
        for (int x : nums1) {
            int idx = pos[x];
            int nge = -1;
            for (int j = idx+1; j < nums2.size(); j++) {
                if (nums2[j] > x) { nge = nums2[j]; break; }
            }
            ans.push_back(nge);
        }
        return ans;
    }
};

// Optimal O(n+m) using Monotonic Stack
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> nextGreater;
        vector<int> st;

        for (int x : nums2) {
            while (!st.empty() && st.back() < x) {
                nextGreater[st.back()] = x;
                st.pop_back();
            }
            st.push_back(x);
        }
        while (!st.empty()) {
            nextGreater[st.back()] = -1;
            st.pop_back();
        }

        vector<int> ans;
        ans.reserve(nums1.size());
        for (int x : nums1) ans.push_back(nextGreater[x]);
        return ans;
    }
};
