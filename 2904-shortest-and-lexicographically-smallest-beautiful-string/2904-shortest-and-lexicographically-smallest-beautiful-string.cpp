class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        int l = 0;
        int count = 0;
        string ans = "";
        for (int r = 0; r < n; r++) {
            if (s[r] == '1') {
                count++;
            }
            while (count > k) {
                if (s[l] == '1') {
                    count--;
                }
                l++;
            }
            while (count == k && s[l] == '0') {
                l++;
            }
            if (count == k) {
                string curr = s.substr(l, r - l + 1);
                if (ans == "" ||
                    curr.length() < ans.length() ||
                    (curr.length() == ans.length() && curr < ans)) {
                    ans = curr;
                }
            }
        }
        return ans;
    }
};