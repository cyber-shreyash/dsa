class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int n = nums.size();

        int ki = -1;
        for (int i = 0; i < n; i++) {
            if (i != nums[i]) {
                ki = ki & nums[i];
            }
        }
        return max(0,ki);
    }
};