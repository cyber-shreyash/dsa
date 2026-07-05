class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        int res=0;
        int ans=nums[0];

        for(int j=k;j<n;j++){
            ans=max(ans,nums[j-k]);
            res=max(res,ans+nums[j]);
        }
        return res;
    }
};