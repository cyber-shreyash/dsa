class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long count=0;
        int n = nums.size();
        int l=0;
        int r=0;
        while(r<n){
            if(nums[r]<= maxK && nums[r]>=minK){
                count+=r-l+1;
            }
            else{
                l=r+1;
            }
            r++;
        }
    return count;}
};