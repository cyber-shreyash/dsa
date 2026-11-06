class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst,
                          int k) {
        vector<int> res(n, INT_MAX);
        res[src] = 0;

        for (int i = 0; i < k + 1; i++) {
            vector<int> prev = res;

            for (int j = 0; j < flights.size(); j++) {
                int s = flights[j][0];
                int d = flights[j][1];
                int wt = flights[j][2];

                if (prev[s] != INT_MAX && res[d] > prev[s] + wt) {
                    res[d] = prev[s] + wt;
                }
            }
        }
        if (res[dst] == INT_MAX) {
            return -1;
        }
        return res[dst];
    }
};