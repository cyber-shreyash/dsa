class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (i != mp[nums[i]][0])
                continue;
            vector<int>& v = mp[nums[i]];
            if (v.size() < 3) {
                continue;
            }
            int k = v[1] - v[0];
            bool l = true;
            for (int j = 2; j < v.size(); j++) {
                if (v[j] - v[j - 1] != k) {
                    l = false;
                    break;
                }
            }
            if (l) {
                count++;
            }
        }
        return count;
    }
};