class Solution {
public:
    vector<vector<string> > groupAnagrams(vector<string> &strs) {
        unordered_map<string, vector<string> > m;
        vector<vector<string> > ans;
        for (auto str: strs) {
            string s = str;
            sort(str.begin(), str.end());
            m[str].push_back(s);
        }
        for (const auto& pair: m) {
            ans.push_back(pair.second);
        }
        
        return  ans;
    }
};
