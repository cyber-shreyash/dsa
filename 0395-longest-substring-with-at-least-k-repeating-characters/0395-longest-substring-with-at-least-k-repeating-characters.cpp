class Solution {
public:
    int longestSubstring(string s, int k) {
        int n = s.size();
        int maxi = 0;

        for (int uniqueTarget = 1; uniqueTarget <= 26; uniqueTarget++) {
            unordered_map<char, int> mp;
            int l = 0;
            int unique = 0;
            int valid = 0;
            for (int r = 0; r < n; r++) {
                if (mp[s[r]] == 0)
                    unique++;
                mp[s[r]]++;
                if (mp[s[r]] == k)
                    valid++;
                while (unique > uniqueTarget) {
                    if (mp[s[l]] == k)
                        valid--;
                    mp[s[l]]--;
                    if (mp[s[l]] == 0)
                        unique--;
                    l++;
                }
                if (unique == uniqueTarget && valid == unique)
                    maxi = max(maxi, r - l + 1);
            }
        }

        return maxi;
    }
};