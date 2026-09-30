class Solution {
public:
    bool ifpossible(vector<int>& nums, int& mid, int& threshold) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] % mid != 0) {
                count += (nums[i] / mid) + 1;
            } else {
                count += nums[i] / mid;
            }
        }
        if (count <= threshold) {
            return true;
        } else {
            return false;
        }
        return true;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int l = 1;
        int r = *max_element(nums.begin(), nums.end());
        int ans = INT_MAX;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (ifpossible(nums, mid, threshold)) {
                ans = min(ans, mid);
                r = mid-1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
};