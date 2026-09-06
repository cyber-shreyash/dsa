class Solution {
public:
    int help(vector<int>& nums, int i, int n, int sum, int count,int target) {
        if (i == n) {
            return sum==target ;
        }
        int pos = help(nums, i + 1, n, sum + nums[i], count,target);
        int neg = help(nums, i + 1, n, sum - nums[i], count,target);
        count = pos + neg;
        return count;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        return help(nums, 0, n, 0, 0,target);
    }
};