class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int m = 0;
        int cnt = 0;
        for (int x : nums) {
            m ^= x;
        }
        int p = k ^ m;

        while (p > 0) {
            if (p & 1) {
                cnt++;
            }
            p >>= 1;
        }
        return cnt;
    }
};