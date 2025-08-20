#include <bits/stdc++.h>
using namespace std;

/*
    121. Best Time to Buy and Sell Stock
    ------------------------------------
    Goal: One transaction (buy once, sell later) to maximize profit.

    Two included approaches:
      1) Brute Force  - O(n^2) time, O(1) space
      2) Optimal      - O(n) time,  O(1) space (Greedy / Min-So-Far or Two-Pointer)

    Notes / Traps:
      - Update minPrice (or left) when a smaller price appears.
      - Only one transaction; if no profit, answer is 0.
      - Edge cases: empty/single-element, strictly decreasing, plateaus.
*/

class Solution {
public:
    // --------- 1) Brute Force: try all buy/sell pairs  ---------
    int maxProfitBrute(vector<int>& prices) {
        int n = (int)prices.size();
        int best = 0; // No transaction is allowed => default 0
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                // Buy at i, sell at j (j > i)
                best = max(best, prices[j] - prices[i]);
            }
        }
        return best;
    }

    // --------- 2) Optimal (Greedy Min-So-Far)  ---------
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;  // best buy seen so far
        int maxProfit = 0;       // best profit seen so far

        for (int p : prices) {
            // If p is smaller than any seen before, this becomes our new best buy.
            if (p < minPrice) {
                minPrice = p;
            }
            // Consider selling today if it improves our best profit.
            int cand = p - minPrice;
            if (cand > maxProfit) {
                maxProfit = cand;
            }
        }
        return maxProfit;
    }

    // --------- 2b) Equivalent Two-Pointer View (Optional) ---------
    // Keep left = buy index (minimum so far), right = current day.
    int maxProfitTwoPointer(vector<int>& prices) {
        int n = (int)prices.size();
        if (n < 2) return 0;

        int l = 0, r = 1;  // l = buy, r = sell
        int ans = 0;

        while (r < n) {
            if (prices[r] < prices[l]) {
                // New lower price found -> better buy point
                l = r;
            } else {
                // Try selling at r
                ans = max(ans, prices[r] - prices[l]);
            }
            ++r;
        }
        return ans;
    }
};

// ------- Quick local test (comment out on LeetCode) -------
 int main() {
     Solution sol;
     vector<int> a{7,1,5,3,6,4};
     cout << sol.maxProfit(a) << "\n"; // 5
     vector<int> b{7,6,4,3,1};
     cout << sol.maxProfit(b) << "\n"; // 0
     vector<int> c{2,1,2,1,0,1,2};
     cout << sol.maxProfit(c) << "\n"; // 2
 }
