class Solution {
public:
    long long countValidSubstrings(string s) {
        int n = s.size();
        int l = 0;
        int r = 0;
        long long c = 0;
        while (r < n) {
            if (r >= 2 && s[r - 2] == 'a' &&
                s[r - 1] == 'b' && s[r] == 'c') {
                l = max(l, r - 1);
            }
            c += r - l + 1;
            r++;
        }
        return c;
    }
};