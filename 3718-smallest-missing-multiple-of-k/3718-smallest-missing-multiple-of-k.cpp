class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        int p = 0;
        for (int i = 1; i < 100; i++) {
            p = i * k;
            if (find(nums.begin(),nums.end(),p) == nums.end()) {
                return p;
            }
        }
        return n-(n%k)+k;
    }
};