class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        long long s=0;
        int n = nums.size();
        sort(nums.rbegin(),nums.rend());
        for(int i =0;i<k;i++){
            int curr=mul-i;
            long long fmul=max(curr,1);
            s+=(long long)nums[i]*fmul;
        }
    return s;}
};