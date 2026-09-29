class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n = s.size();
        unordered_map<string, string> mp;
        for (auto x : knowledge) {
            mp[x[0]] = x[1];
        }
        string ans = "";
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                i++;
                string res = "";
                while (s[i] != ')') {
                    res += s[i];
                    i++;
                }
                if (mp.find(res) != mp.end()) {
                    ans += mp[res];
                } else {
                    ans += '?';
                }
            } else if (s[i] == ')') {
                continue;
            } else {
                ans += s[i];
            }
        }
        return ans;
    }
};