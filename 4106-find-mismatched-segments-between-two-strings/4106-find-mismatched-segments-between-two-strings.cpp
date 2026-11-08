class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        string p = "";
        string k = "";
        int n = s1.size();
        vector<string> r;
        vector<vector<string>> s;
        for (int i = 0; i < n; i++) {
            if (s1[i] == s2[i]) {
                if (k != "" && p != "") {
                    r.push_back(p);
                    r.push_back(k);
                    s.push_back(r);
                    r={};
                    k = "";
                    p = "";
                }

            } else {
                p += s1[i];
                k += s2[i];
            }
        }
        if (k != "" && p != "") {
            r.push_back(p);
            r.push_back(k);
            s.push_back(r);
        }
        return s;
    }
};