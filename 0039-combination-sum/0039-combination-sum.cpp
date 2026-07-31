class Solution {
public:
    void help(vector<int>& candidates, int target, int idx,vector<vector<int>>& a,
              vector<int>& b) {
        if (target == 0) {
            a.push_back(b);
            return;
        }
        if (target < 0) {
            return;
        }

        for (int i = idx; i < candidates.size(); i++) {
            b.push_back(candidates[i]);
            help(candidates, target - candidates[i],i, a, b);
            b.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> a;
        vector<int> b;
        help(candidates, target, 0,a, b);
        return a;
    }
};