class Solution {
public:
    vector<int> x = {-1, 1, 0, 0};
    vector<int> y = {0, 0, -1, 1};
    bool isvalid(int i, int j, int n, int m) {
        if (i >= n || i < 0 || j >= m || j < 0) {
            return false;
        }
        return true;
    }
    void dfs(vector<vector<char>>& grid, vector<vector<bool>>& vis, int n,
             int m, int i, int j) {
        vis[i][j] = true;
        for (int k = 0; k < 4; k++) {
            int row = i + x[k];
            int col = j + y[k];
            if (isvalid(row, col, n, m) && grid[row][col] == '1' &&
                !vis[row][col]) {
                dfs(grid, vis, n, m, row, col);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int i = 0, j = 0;
        int res = 0;
        vector<vector<bool>> vis(n, vector<bool>(m + 1, false));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1' && !vis[i][j]) {
                    dfs(grid, vis, n, m, i, j);
                    res++;
                }
            }
        }

        return res;
    }
};