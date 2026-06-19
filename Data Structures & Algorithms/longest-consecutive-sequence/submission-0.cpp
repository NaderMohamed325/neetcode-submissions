class Solution {
public:
    int longestConsecutive(vector<int> &nums) {
        map<int, int> m;
        for (int num: nums) {
            m[num]++;
        }
        int maxLength = 0;
        for (auto it = m.begin(); it != m.end(); ++it) {
            if (it == m.begin() || std::prev(it)->first + 1 != it->first) {
                int currentLength = 1;
                auto nextIt = std::next(it);
                while (nextIt != m.end() && nextIt->first == std::prev(nextIt)->first + 1) {
                    currentLength++;
                    ++nextIt;
                }
                maxLength = max(maxLength, currentLength);
            }
        }
        return maxLength;
    }
};
