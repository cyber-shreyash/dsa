class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> indices;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (x == nums[i])
                indices.push_back(i);
        }
        vector<int> ans;
        for (int i = 0; i < queries.size(); i++) {
            if (queries[i] <= indices.size())
                ans.push_back(indices[queries[i] - 1]);
            else
                ans.push_back(-1);
        }
        return ans;
    }
};