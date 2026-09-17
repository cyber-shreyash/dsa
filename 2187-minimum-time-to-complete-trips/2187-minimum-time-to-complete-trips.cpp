class Solution {
public:
    bool ifpossible(vector<int>& time, int& t, long long& mid) {
        int n = time.size();
        long long count = 0; // totaltrips possible
        for (int i = 0; i < n; i++) {
            if (mid >= time[i]) {
                long long m = mid;
                count += m / time[i];

            } else {
                continue;
            }
        }
        if (count >= t) {
            return true;
        }
        return false;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        int n = time.size();
        long long l = *min_element(time.begin(), time.end());
        long long r = 1LL * (*min_element(time.begin(), time.end())) *
                      totalTrips; // fastest bus can travel for totalTrips
        while (l < r) {
            long long mid = l + (r - l) / 2;
            if (ifpossible(time, totalTrips, mid)) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        return r;
    }
};