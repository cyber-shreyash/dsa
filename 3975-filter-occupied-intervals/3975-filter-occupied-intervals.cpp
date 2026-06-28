class Solution {
public:
    vector<vector<int>>
    filterOccupiedIntervals(vector<vector<int>>& occupiedIntervals,
                            int freeStart, int freeEnd) {
        sort(occupiedIntervals.begin(), occupiedIntervals.end());
        vector<vector<int>> merged;
        int st = 0;
        merged.push_back(occupiedIntervals[0]);
        for (int i = 1; i < occupiedIntervals.size(); i++) {
            if (occupiedIntervals[i][0] <= occupiedIntervals[st][1] + 1) {
                occupiedIntervals[st][1] =
                    max(occupiedIntervals[st][1], occupiedIntervals[i][1]);
            } else {
                st++;
                occupiedIntervals[st] = occupiedIntervals[i];
            }
        }
        vector<vector<int>> result;
        for (int i =0;i<=st;i++) {
            int s = occupiedIntervals[i][0];
            int e = occupiedIntervals[i][1];
            if (e < freeStart) {
                result.push_back({s, e});
            } else if (s > freeEnd) {
                result.push_back({s, e});
            } else {
                if (s < freeStart) {
                    result.push_back({s, freeStart - 1});
                }
                if (e > freeEnd) {
                    result.push_back({freeEnd+1, e});
                }
            }
        }
    return result;}
};