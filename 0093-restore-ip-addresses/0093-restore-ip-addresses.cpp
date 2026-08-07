class Solution {
public:
    vector<string> ans;

    bool isValid(string &segment) {
        if (segment.size() > 1 && segment[0] == '0')
            return false;

        int num = stoi(segment);

        return num >= 0 && num <= 255;
    }

    void help(string &s, int idx, vector<string> &path) {

        if (path.size() == 4) {
            if (idx == s.size()) {
                ans.push_back(path[0] + "." + path[1] + "." +
                              path[2] + "." + path[3]);
            }
            return;
        }

        for (int len = 1; len <= 3; len++) {

            if (idx + len > s.size())
                break;

            string segment = s.substr(idx, len);

            if (!isValid(segment))
                continue;

            path.push_back(segment);
            help(s, idx + len, path);
            path.pop_back();
        }
    }

    vector<string> restoreIpAddresses(string s) {

        if (s.size() < 4 || s.size() > 12)
            return {};

        vector<string> path;
        help(s, 0, path);

        return ans;
    }
};