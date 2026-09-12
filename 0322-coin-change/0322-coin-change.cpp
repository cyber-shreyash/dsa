class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(), coins.end());
        int n = coins.size();
        vector<vector<int>> dp(n + 1, vector<int>(amount + 1, amount + 1));
        dp[0][0] = 0;
        for (int i = 1; i < n + 1; i++) {
            for (int j = 0; j < amount + 1; j++) {
                if (coins[i - 1] <= j) {
                    dp[i][j] = min(dp[i - 1][j], 1 + dp[i][j - coins[i - 1]]);
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        if (dp[n][amount] == amount + 1) {
            return -1;
        } else {
            return dp[n][amount];
        }
    }
};