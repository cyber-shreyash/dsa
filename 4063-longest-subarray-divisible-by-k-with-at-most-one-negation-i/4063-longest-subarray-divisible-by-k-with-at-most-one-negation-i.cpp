class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            unordered_set<int> s;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                int rem =
                    ((sum % k) + k) % k; // sum can be negative so added k to
                                         // the mod in order to keep it positive
                if (rem == 0) {
                    ans = max(ans, j - i + 1);
                }
                int x = ((nums[j] * 2 % k) + k) % k;
                s.insert(x);
                if (s.count(rem)) {
                    ans = max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }
};