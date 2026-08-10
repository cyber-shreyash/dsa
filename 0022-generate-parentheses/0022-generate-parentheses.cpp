class Solution {
public:
    void help(int n, int open, int close, string& s, vector<string>& a) {
        if (s.size() == 2 * n) {
            a.push_back(s);
            return;
        }
        if (open <  n) {
            s.push_back('(');
            help(n,open+ 1, close ,s, a);
            s.pop_back();
        }
        if (close < open) {
            s.push_back(')');
            help(n, open,close + 1, s, a);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string s;
        vector<string> a;
        help(n, 0, 0, s, a);
        return a;
    }
};