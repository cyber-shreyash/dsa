class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 if (a[0] == b[0]) return a[1] > b[1];
                 return a[0] < b[0];//sorted by ascending order of the first element of the pair
             });

        int n = intervals.size();
        int count = 0;

        int start1 = intervals[0][0];
        int end1   = intervals[0][1];

        for (int i = 1; i < n; i++) {
            int start2 = intervals[i][0];
            int end2   = intervals[i][1];

            if (start1 <= start2 && end1 >= end2) {
                count++;
            } else {
                start1 = start2;
                end1   = end2;
            }
        }

        return n - count;
    }
};