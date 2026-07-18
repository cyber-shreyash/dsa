class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a = nums[0];
        int n = nums.size();
        int b = nums[n - 1];
        int maxi = 0;
        for (int i = 1; i <= a; i++) {
            if (b % i == 0 && a % i == 0) {
                maxi = max(maxi, i);
            }
        }
        return maxi;
    }
};