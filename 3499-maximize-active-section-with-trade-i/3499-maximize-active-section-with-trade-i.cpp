class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.size();
        int prevz = 0;
        int currz = 0;
        int ones = 0;
        int best=0;
        int i = 0;
        while (i < n) {
            if (s[i] == '0') {
                prevz++;
                i++;
            } else {
                while (i < n && s[i] == '1') {
                    ones++;
                    i++;
                }
                while (i < n && s[i] == '0') {
                    currz++;
                    i++;
                }
                if (currz && prevz) {
                    best = max(best, prevz + currz);
                }
                prevz = currz;
                currz = 0;
            }
        }
        return ones + best;
    }
};