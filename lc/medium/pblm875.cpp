class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int high = *max_element(piles.begin(), piles.end());
        int n = piles.size();
        int k = 0;
        int low = 1;
        while (low <= high) {
            long long c = 0;
            int mid = low + (high - low) / 2;
            for (int i = 0; i < n; i++) {
                if (piles[i] % mid == 0) {
                    c = c + (piles[i] / mid);
                } else {
                    c = c + (piles[i] / mid) + 1;
                }
            }
            if (c <= h) {
                k = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return k;
    }
};