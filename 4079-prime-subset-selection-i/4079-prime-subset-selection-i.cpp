class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
        vector<bool> sieve(n + 1, true);
        sieve[0] = false;
        sieve[1] = false;

        for (int i = 2; i * i <= n ; i++) {
            if (sieve[i]) {
                for (int j = i * i; j < n + 1; j += i) {
                    sieve[j] = false;
                }
            }
        }
        vector<int> si;
        long long sum = 0;
        for (int i = 2; i <= n; i++) {
            if (sieve[i]) {
                sum += i;
                if (sum <= s) {
                    si.push_back(i);
                }
            }
        }

        return si;
    }
};