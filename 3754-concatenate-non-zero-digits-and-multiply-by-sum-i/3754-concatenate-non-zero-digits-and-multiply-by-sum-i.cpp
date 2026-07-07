class Solution {
public:
    long long sumAndMultiply(int n) {
        int actsum = 0;
        string s = "";
        while (n > 0) {
            if (n % 10 != 0) {
                actsum += n % 10;
                s += to_string(n % 10);
            }
            n /= 10;
        }
        if (s.empty()) {
            return 0;
        }
        reverse(s.begin(), s.end());
        long long st = stoll(s);
        return st * actsum;
    }
};