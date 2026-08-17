class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        int cnt[10][11] = {0};

        for (int i = 0; i < pick.size(); i++) {
            int player = pick[i][0];
            int color = pick[i][1];
            cnt[player][color]++;
        }

        int ans = 0;

        for (int player = 0; player < n; player++) {
            for (int color = 0; color <= 10; color++) {
                if (cnt[player][color] > player) {
                    ans++;
                    break;
                }
            }
        }

        return ans;
    }
};