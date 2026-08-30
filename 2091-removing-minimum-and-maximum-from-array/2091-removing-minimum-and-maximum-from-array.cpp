class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int minindex=0;
        int maxindex=0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (mini > nums[i]) {
                mini = nums[i];
                minindex = i;
            }
            if (maxi < nums[i]) {
                maxi = nums[i];
                maxindex = i;
            }
        }
        int l = min(minindex, maxindex);
        int r = max(minindex, maxindex);

        int a = min(r + 1, min(n - l, l + 1 + n - r));
        return a;
    }
};