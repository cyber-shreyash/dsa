class Solution {
public:
    bool ifpossible(vector<int>& candies, long long k, int mid) {
        int n = candies.size();
        long long count = 0;
        for (int i = 0; i < n; i++) {
                count += candies[i]/mid;
        }
        if (count >= k) {
            return true;
        }
        return false;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int n = candies.size();
        int l = 1;
        int ans = 0;
        int r = *max_element(candies.begin(), candies.end());
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (ifpossible(candies, k, mid)) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid-1;
            }
        }
        return ans;
    }
};