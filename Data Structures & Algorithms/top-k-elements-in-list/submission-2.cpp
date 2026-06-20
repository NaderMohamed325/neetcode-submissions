class Solution {
public:
    vector<int> topKFrequent(vector<int> &nums, int k) {
        unordered_map<int, int> freq;
        for (int num: nums)freq[num]++;
        priority_queue<pair<int, int>, vector<pair<int, int> >, greater<> > q;

        for (auto freq1: freq) {
            q.emplace(freq1.second, freq1.first);
            if (q.size() > k) {
                q.pop();
            }
        }

        vector<int> ans;
        while (!q.empty()) {
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};