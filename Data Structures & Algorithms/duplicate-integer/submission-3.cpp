#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    bool hasDuplicate(vector<int> &nums) {
        map<int, int> m;
        for (int num: nums) {
            m[num]++;
            if (m[num] == 2) {
                return true;
            }
        }
        return false;
    }
};
