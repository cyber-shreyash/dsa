class Solution {
public:
    void help(int n, int k, vector<int>& a, vector<vector<int>>& b, int idx) {
        if (a.size() == k && n==0) {
            b.push_back(a);
            return;
        }
        for (int i = idx; i <= 9; i++) {
            if (n >= i) {
                a.push_back(i);
                help(n - i, k, a, b, i + 1);
                a.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> b;
        vector<int> a;
        help(n, k, a, b, 1);
        return b;
    }
};