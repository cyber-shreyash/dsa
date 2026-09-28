class Solution {
public:
    string check(int n, int base) {
        string s = "0123456789";
        string res = "";
        while (n > 0) {
            int rem = n % base;
            res += s[rem];
            n /=base;
        }
        reverse(res.begin(),res.end());
        return res;
    }
    bool isPalin(string s) {
        int n = s.size();
        int l = 0;
        int r = n - 1;
        while (l < r) {
            if (s[l] != s[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    bool isStrictlyPalindromic(int n) {
        for (int b = 2; b <= n - 2; b++) {
            string res = check(n, b);
            if (!isPalin(res)) {
                return false;
            }
        }
        return true;
    }
};