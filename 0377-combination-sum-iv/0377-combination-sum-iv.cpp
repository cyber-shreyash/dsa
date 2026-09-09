class Solution {
public:
    int help(vector<int>& nums, int n, int target, vector<int>& dp) {
        if (target == 0) {
            return 1;
        }
        if (dp[target] != -1) {
            return dp[target];
        }
        dp[target] = 0;
        for (int x : nums) {
            if (x <= target) {
                dp[target] += help(nums, n, target - x, dp);
            }
        }
        return dp[target];
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        if (target == 0) {
            return 1;
        }
        int n = nums.size();
        vector<int> dp(target + 1, -1);

        return help(nums, n, target, dp);
    }
};