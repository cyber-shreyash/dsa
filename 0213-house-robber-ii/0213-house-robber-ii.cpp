class Solution {
public:
    int help(vector<int>& nums, int i, int free, int n,
             vector<vector<int>>& dp) {
        if (i >= n) {
            return 0;
        }
        if (dp[i][free] != -1) {
            return dp[i][free];
        }
        if (free == 1) {
            return dp[i][free] = max(nums[i] + help(nums, i + 1, 0, n, dp),
                                     help(nums, i + 1, 1, n, dp));
        }
        return dp[i][free] = help(nums, i + 1, 1, n, dp);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp1(n, vector<int>(2, -1));
        vector<vector<int>> dp2(n, vector<int>(2, -1));
        if (n == 1) {
            return nums[0];
        }
        return max(help(nums, 0, 1, n - 1, dp1), help(nums, 1, 1, n, dp2));
    }
};