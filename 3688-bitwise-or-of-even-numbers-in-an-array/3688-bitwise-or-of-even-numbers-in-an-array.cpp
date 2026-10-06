class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int ans = 0;

        for (int val : nums) {
            if (val % 2 == 0) {
                ans |= val;
            }
        }

        return ans;
    }
};