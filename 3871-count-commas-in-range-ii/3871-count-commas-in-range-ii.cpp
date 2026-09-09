class Solution {
public:
    long long countCommas(long long n) {
        long long base = 1000;
        long long ans = 0;
        int comma = 1;

        while (base <= n) {

            long long end = min(n, base * 1000 - 1);

            ans += (end - base + 1) * comma;

            base *= 1000;
            comma++;
        }

        return ans;
    }
};