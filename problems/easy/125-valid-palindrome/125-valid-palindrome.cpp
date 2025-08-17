class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while(left < right) {
            char c = s[left];
            char d = s[right];

            if(isalnum(c)) c = tolower(c);
            else { left++; continue; }

            if(isalnum(d)) d = tolower(d);
            else { right--; continue; }

            if(c != d) return false;

            left++;
            right--;
        }

        return true;
    }
};
