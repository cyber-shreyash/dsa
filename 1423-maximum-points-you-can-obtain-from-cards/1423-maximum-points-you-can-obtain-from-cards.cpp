class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int p = n - k;
        int l = 0;
        int sum = 0;
        int sumi = 0;
        for (int x : cardPoints) {
            sumi += x;
        }
        int mini = INT_MAX;
        for (int r = 0; r < n; r++) {
            sum += cardPoints[r];
            while (r - l + 1 > p) {
                sum -= cardPoints[l];
                l++;
            }
            if (r - l + 1 == p) {
                mini = min(mini, sum);
            }
        }
        return sumi - mini;
    }
};