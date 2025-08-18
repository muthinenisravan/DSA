#include <bits/stdc++.h>
using namespace std;

/*
    Problem: Container With Most Water
    Link: https://leetcode.com/problems/container-with-most-water/

    Approach 1: Brute Force (O(n^2))
    ------------------------------------------------
    - For every pair of lines (i, j), compute the area.
    - Track the maximum area.
    - Time: O(n^2), Space: O(1).
*/
class SolutionBruteForce {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int res = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int w = j - i;
                int h = min(height[i], height[j]);
                res = max(res, w * h);
            }
        }
        return res;
    }
};

/*
    Approach 2: Two Pointers (O(n))
    ------------------------------------------------
    - Use two pointers: left at 0, right at n-1.
    - Area is limited by the shorter line.
    - Move the pointer pointing to the smaller line inward,
      since moving the taller one cannot increase area.
    - Time: O(n), Space: O(1).
*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int res = 0;

        while (left < right) {
            int w = right - left;
            int h = min(height[left], height[right]);
            res = max(res, w * h);

            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        return res;
    }
};

