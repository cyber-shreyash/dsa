class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int del = 0;
        int idx = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (idx % 2 == 0 || nums[i] != nums[idx - 1]) {
                nums[idx++] = nums[i];
            } else {
                del++;
            }
        }
        if (idx % 2 != 0) {
            del++;
        }
        return del;
    }
};