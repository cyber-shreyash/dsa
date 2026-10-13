class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        sort(nums.begin(), nums.end(),
             [](int a, int b) { return abs(a) < abs(b); });
        long long maxi = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                maxi += nums[r] * nums[r];
                r--;
            } else {
                maxi -= nums[l] * nums[l];
                l++;
            }
        }
        return maxi;
    }
};