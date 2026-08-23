class Solution {
public:
    int mod = 1e9 + 7;

    int minimumPossibleSum(int n, int target) {
        long long ans = 0;
        int f = min(n, target / 2);
        ans = (ans + (1LL * f * (f + 1)) / 2) % mod;
        n -= f;
        ans = (ans + 1LL * n * target) % mod;
        ans = (ans + (1LL * (n - 1) * n) / 2) % mod;
        return ans;
    }
};