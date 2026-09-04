class Solution {
public:
    int help(vector<int>& cost, int n, int i, vector<int>& dp) {
        if (i >= n) {
            return 0;
        }
        if (dp[i] != -1) {
            return dp[i];
        }
        return dp[i]=cost[i]+min(help(cost, n, i + 1, dp),
                           help(cost, n, i + 2,  dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int ans = 0;
        vector<int> dp(n + 1, -1);
        return min(help(cost, n, 0, dp), help(cost, n, 1, dp));
    }
};