#include <bits/stdc++.h>
using namespace std;

/*
    3. Longest Substring Without Repeating Characters
    -------------------------------------------------
    Return the length of the longest substring without duplicate characters.

    Included approaches:
      1) Brute Force (O(n^3))               - conceptual baseline
      2) Sliding Window (Set/bitmap)        - O(n)
      3) Sliding Window (Last-seen index)   - O(n)  <-- Preferred

    Notes / Traps:
      - On duplicate at r, move left BEFORE updating answer.
      - For array indexing, cast to unsigned char to avoid UB on signed char.
      - ASCII optimization: last[128] initialized to -1 is faster than unordered_map.
*/

// --------- 1) Brute Force (O(n^3)) ----------
int lengthOfLongestSubstringBrute(const string& s) {
    int n = (int)s.size();
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            // Check uniqueness on [i..j]
            bool seen[256] = {false};
            bool ok = true;
            for (int k = i; k <= j; ++k) {
                unsigned char c = (unsigned char)s[k];
                if (seen[c]) { ok = false; break; }
                seen[c] = true;
            }
            if (ok) ans = max(ans, j - i + 1);
        }
    }
    return ans;
}

// --------- 2) Sliding Window (Set/bitmap) ----------
int lengthOfLongestSubstringSet(const string& s) {
    int n = (int)s.size();
    int ans = 0, left = 0;
    bool inWin[256] = {false};

    for (int r = 0; r < n; ++r) {
        unsigned char c = (unsigned char)s[r];
        while (inWin[c]) {
            unsigned char lc = (unsigned char)s[left];
            inWin[lc] = false;
            ++left;
        }
        inWin[c] = true;
        ans = max(ans, r - left + 1);
    }
    return ans;
}

// --------- 3) Sliding Window (Last-seen index) ----------
int lengthOfLongestSubstring(const string& s) {
    int n = (int)s.size();
    if (n == 0) return 0;

    int last[128];
    std::fill(begin(last), end(last), -1);

    int ans = 0, left = 0;
    for (int r = 0; r < n; ++r) {
        unsigned char c = (unsigned char)s[r]; // safe for indexing
        if (last[c] >= left) {
            // c was seen inside current window; jump left past its previous index
            left = last[c] + 1;
        }
        last[c] = r;
        ans = max(ans, r - left + 1);
    }
    return ans;
}

// // Quick local test
 int main() {
     cout << lengthOfLongestSubstring("abcabcbb") << "\n"; // 3
     cout << lengthOfLongestSubstring("pwwkew") << "\n";   // 3
     cout << lengthOfLongestSubstring("abba") << "\n";     // 2
 }

