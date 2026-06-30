class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() <= 1) {
            return s.length();
        }
        int l = 0, r = 0;
        int maxLen = 0;
        unordered_set<char> seen;
        while (r < s.length()) {
            if (seen.find(s[r]) == seen.end()) {
                seen.insert(s[r]);
                maxLen = max(maxLen, r - l + 1);
                r++;
            } else {
                seen.erase(s[l]);
                l++;
            }
        }
        return maxLen;
    }
};