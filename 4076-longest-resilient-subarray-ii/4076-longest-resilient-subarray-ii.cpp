class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 1;

        for (int i = 0; i < n; ) {
            int rem = nums[i] % k;
            int j = i;

            while (j < n && nums[j] % k == rem)
                j++;

            int len = j - i;
            int q = k / gcd(rem, k);

            ans = max(ans, 1 + ((len - 1) / q) * q);

            i = j;
        }

        return ans;
    }
};