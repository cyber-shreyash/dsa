class Solution {
public:
    int help(int i, int j, int n, int m, string& s, string& t,vector<vector<int>>&dp) {
        if (j == m) {
            return 1;
        }
        if (i == n) {
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int take = 0;
        if (s[i] == t[j]) {
            take = help(i + 1, j + 1, n, m, s, t,dp);
        }
        int nt = help(i + 1, j, n, m, s,t,dp);
        return dp[i][j]=take + nt;
    }
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<vector<int>>dp(n+1, vector<int>(m+1,-1));
        return help(0, 0, n, m, s, t,dp);
    }
};