class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();    // rows
        int n = grid[0].size(); // columns
        vector<vector<int>>dp(m,vector<int>(n,-1));
        dp[0][0]=grid[0][0];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0)continue;
                int a = INT_MAX;
                int b = INT_MAX;
                if(i>0) a = dp[i-1][j];
                if(j>0) b = dp[i][j-1];
                dp[i][j]=grid[i][j]+min(a,b);
            }
        }
    return dp[m-1][n-1];}
};