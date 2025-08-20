#include <bits/stdc++.h>
using namespace std;

/*
    424. Longest Repeating Character Replacement
    --------------------------------------------
    Goal: Max length of substring convertible to all same char using at most k replacements.

    Implementations:
      1) Brute Force (conceptual baseline)
      2) Sliding Window (Optimal) with freq[26] and running maxFreq

    Notes / Traps:
      - Window valid if (window_len - maxFreq) <= k.
      - Do NOT try to decrement maxFreq on shrink; allow it to be "stale" for O(n).
      - Alphabet assumed 'A'..'Z'; switch to unordered_map<char,int> for general alphabets.
*/

// ---------- 1) Brute Force (O(n^3) baseline) ----------
int characterReplacementBrute(const string& s, int k) {
    int n = (int)s.size(), ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            int freq[26] = {0};
            int maxFreq = 0;
            for (int t = i; t <= j; ++t) {
                int idx = s[t] - 'A';
                maxFreq = max(maxFreq, ++freq[idx]);
            }
            int len = j - i + 1;
            if (len - maxFreq <= k) ans = max(ans, len);
        }
    }
    return ans;
}

// ---------- 2) Optimal Sliding Window (O(n)) ----------
int characterReplacement(string s, int k) {
    int n = (int)s.size();
    if (n == 0) return 0;
    if (k >= n) return n;

    int freq[26] = {0};
    int left = 0, ans = 0, maxFreq = 0;

    for (int right = 0; right < n; ++right) {
        int rIdx = s[right] - 'A';
        maxFreq = max(maxFreq, ++freq[rIdx]);

        // shrink while more than k replacements would be needed
        while ((right - left + 1) - maxFreq > k) {
            --freq[s[left] - 'A'];
            ++left;
        }
        ans = max(ans, right - left + 1);
    }
    return ans;
}

// // Quick local test
 int main() {
     cout << characterReplacement("AABABBA", 1) << "\n"; // 4
     cout << characterReplacement("ABBCCDD", 2) << "\n"; // 4
     cout << characterReplacement("AAAA", 0) << "\n";    // 4
     cout << characterReplacement("ABCD", 0) << "\n";    // 1
 }

