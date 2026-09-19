class Solution {
public:
    bool ifprime(int p) {
        if (p < 2) return false;
        for (int i = 2; i * i <= p; i++) {
            if (p % i == 0)
                return false;
        }
        return true;
    }

    int maximumPrimeDifference(vector<int>& nums) {
        int first = -1;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (ifprime(nums[i])) {
                if (first == -1)
                    first = i;
                else
                    ans = max(ans, i - first);
            }
        }

        return ans;
    }
};