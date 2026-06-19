class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char, char> bracket_map = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        for (char c: s) {
            if (bracket_map.count(c)) {
                if (stk.empty() || stk.top() != bracket_map[c]) {
                    return false;
                }
                stk.pop();
            } else {
                stk.push(c);
            }
        }
        return stk.empty();
    }
};