class Solution {
public:
    int lcs(string &s,string &p){
        int n = s.size();
        int m = p.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i =1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==p[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }}
        return dp[n][m];
    }
    int longestPalindromeSubseq(string s) {
        string p= s;
        reverse(p.begin(),p.end());
        return lcs(s,p);
    }
};