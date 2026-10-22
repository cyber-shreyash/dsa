class Solution {
public:
    vector<int> x = {-1, 1, 0, 0};
    vector<int> y = {0, 0, -1, 1};
    bool isvalid(int n, int m, int i, int j) {
        if (i < 0 || i >= n || j >= m || j < 0) {
            return false;
        }
        return true;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, int>> q;
        int fresh = 0;
        int time = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                } else if (grid[i][j] == 1) {
                    fresh++;
                }
            }
        }
        if(fresh==0){
            return 0;
        }
        while (!q.empty()) {
            int s = q.size();
            while (s--) {
                pair<int, int> p = q.front();
                q.pop();
                int row = p.first;
                int col = p.second;
                for (int k = 0; k < 4; k++) {
                    int r = row + x[k];
                    int c = col + y[k];
                    if (isvalid(n, m, r, c) && grid[r][c] == 1) {
                        q.push({r, c});
                        grid[r][c] = -2;
                        fresh--;
                    }
                }
            }
            time++;
        }
        if(fresh>0){
            return -1;
        }
        return time-1;
    }
};