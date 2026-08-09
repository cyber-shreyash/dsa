class Solution {
public:
    int mod = 1e9 + 7;

    long long be(long long a, long long b) {
        long long res = 1;

        while (b > 0) {
            if (b & 1) {
                res = (res * a) % mod;
            }

            a = (a * a) % mod;
            b = b / 2;
        }

        return res;
    }

    int countGoodNumbers(long long n) {
        return (be(4, n / 2) * be(5, (n + 1) / 2)) % mod;
    }
};