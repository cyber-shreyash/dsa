class Solution {
public:
    bool ifpossible(vector<int>& b, int m, int k, int mid) {
        int count = 0; // no of bouquets formed
        int adj = 0;   // adjacent flowers
        int n = b.size();
        for (int i = 0; i < n; i++) {
            if (mid >= b[i]) {
                adj++;
                if (adj == k) {
                    count++;
                    adj=0;
                }
            }
            else{
                adj=0;
            }
        }
        if (m <= count) {
            return true;
        }
        return false;
    }
    int minDays(vector<int>& b, int m, int k) {
        int n = b.size();
        if (n < 1LL* m * k) {
            return -1;
        }
        int l = *min_element(b.begin(), b.end());
        int r = *max_element(b.begin(), b.end());
        int ans = INT_MAX;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (ifpossible(b, m, k, mid)) {
                r = mid ;
            } else {
                l = mid + 1;
            }
        }
        return r;
    }
};