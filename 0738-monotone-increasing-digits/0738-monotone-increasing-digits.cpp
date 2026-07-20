class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string s = to_string(n);
        int k = s.size();
        int mark = k;

        for (int i = k - 1; i > 0; i--) {
            if (s[i - 1] > s[i]) {
                s[i - 1]--;
                mark = i;
            }
        }
        for (int i = mark; i < k; i++) {
            s[i] = '9';
        }
        return stoi(s);
    }
};