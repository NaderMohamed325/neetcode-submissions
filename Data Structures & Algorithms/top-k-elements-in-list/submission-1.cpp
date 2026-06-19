class Solution {
public:
    vector<int> topKFrequent(vector<int> &nums, int k) {
        unordered_map<int, int> freq;
        for (int num : nums)
            freq[num]++;

 
        vector<pair<int, int>> arr;
        for (auto &[num, count] : freq)
            arr.emplace_back(count, num);

 
        sort(arr.begin(), arr.end(), [](auto &a, auto &b) {
            return a.first > b.first;
        });

  
        vector<int> result;
        for (int i = 0; i < k && i < (int)arr.size(); i++)
            result.push_back(arr[i].second);

        return result;
    }
};
