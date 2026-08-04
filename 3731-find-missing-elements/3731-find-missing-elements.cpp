class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<bool> mp(101, false);
        int maxm = -1;
        int minm = 101;
        for (int i = 0; i < nums.size(); i++) {
            maxm = max(maxm, nums[i]);
            minm = min(minm, nums[i]);
            mp[nums[i]] = true;
        }
        vector<int> ans;
        for (int i = minm; i < maxm; i++) {
            if (!mp[i]) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};