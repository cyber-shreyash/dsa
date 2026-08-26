class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        string ki = "";
        unordered_map<char, int> mp;
        vector<string> v;
        int l = 0;
        int maxi = 0;
        int count = 0;

        for (int r = 0; r < n; r++) {
            mp[s[r]]++;
            if (s[r] == '1') {
                count++;
            }
            if (s[r] == '1') {
                ki += '1';
            } else {
                ki += '0';
            }
            while (count > k) {
                if (s[l] == '1') {
                    count--;
                }
                mp[s[l]]--;
                if (mp[s[l]] == 0) {
                    mp.erase(s[l]);
                }
                ki.erase(0, 1);
                l++;
            }
            maxi = max(maxi, r - l + 1);
            while (count == k && s[l] == '0') {
                ki.erase(0, 1);
                l++;
            }
            if (count == k) {
                v.push_back(ki);
            }
        }
        sort(v.begin(), v.end(), [](string a, string b) {
            if (a.length() != b.length())
                return a.length() < b.length();

            return a < b;
        });
        if (v.empty())
            return "";
        return v[0];
    }
};