
class Solution {
public:
    bool isPalindrome(string s) {

        ranges::transform(s, s.begin(), ::tolower);
        string pro;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z' || s[i]>='0' && s[i] <= '9') {
                pro += s[i];
            }
        }
        int l = 0, r = pro.length() - 1;
        while (l < r) {
            if (pro[l] != pro[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
