class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        long long ans = 0;
        for(int i = 0; i < n; i++){
            if(i < n/2) ans += max(0, nums[i] - k); // 1st case
            else if(i == n/2) ans += abs(nums[i] - k); // 2nd case
            else ans += max(0, k - nums[i]); // 3rd case
        }
        return ans;

    }
};