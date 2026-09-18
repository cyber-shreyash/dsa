class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int ans = 1;
        for (int i = 0; i < n; i++) {
            res[i] = 1;
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j]) {
                    res[i] = max(res[i], 1 + res[j]);
                }
            }
        }
        for (int i = 0; i < n; i++) {
            ans = max(ans, res[i]);
        }
        return ans;
    }
};

//har element se pehle check krlo ki usse chote element ka lis kya hai aur cuurent elemnt ko useki length me add krke max check kr lo 