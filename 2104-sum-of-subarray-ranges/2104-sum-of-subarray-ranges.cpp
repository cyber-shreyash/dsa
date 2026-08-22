class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();

        long long sum = 0;
        unordered_map<int, int> mp;
        for (int l = 0; l < n; l++) {
            int maxi = INT_MIN;
            int mini = INT_MAX;
            for (int r = l ; r < n; r++) {
                    mini = min(mini, nums[r]);
                    maxi = max(maxi, nums[r]);
                sum += maxi - mini;
            }
        }
        return sum;
    }
};