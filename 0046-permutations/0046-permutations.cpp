class Solution {
public:
    void helper(vector<int>& nums, int n, vector<int>& k,
                vector<vector<int>>& p, map<int, int>& mp) {
        if (k.size() == n) {
            p.push_back(k);
            return;
        }
        for (int i = 0; i < n; i++) {
            if (mp[nums[i]] == 0) {
                mp[nums[i]]++;

                k.push_back(nums[i]);
                helper(nums, n, k, p, mp);
                k.pop_back();
                mp[nums[i]]--;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp;
        vector<vector<int>> p;
        vector<int> k;
        helper(nums, n, k, p, mp);
        return p;
    }
};