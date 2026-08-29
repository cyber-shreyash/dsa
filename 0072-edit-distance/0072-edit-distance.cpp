class Solution {
public:
    int check(string& word1, string& word2, int i, int j,vector<vector<int>>&dp) {
        int n = word1.size();
        int m = word2.size();
        if (i == n) {
            return m - j;
        }
        if (j == m) {
            return n - i;
        }
        if(dp[i][j]!=-1){
            return dp[i][j]; 
        }
        if (j < m && i < n && word1[i] == word2[j]) {
            return dp[i][j]=check(word1, word2, i + 1, j + 1,dp);
        }
        int ins = 1 + check(word1, word2, i, j + 1,dp);
        int del = 1 + check(word1, word2, i + 1, j,dp);
        int rep = 1 + check(word1, word2, i + 1, j + 1,dp);
        return dp[i][j]= min(min(ins, del), rep);
    }
    int minDistance(string word1, string word2) {
        int n =word1.size();
        int m =word2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return check(word1, word2, 0, 0,dp);
    }
};