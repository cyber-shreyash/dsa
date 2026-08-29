class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        int n = nums.size();
        long long maxi = 0;
        int l = 0;
        long long sum=0;
        unordered_map<int, int> mp;
        if(n<k){
            return 0;
        }
        for (int r = 0; r < n; r++) {
            mp[nums[r]]++;
            sum += nums[r];
            while (r-l+1 > k) {
                mp[nums[l]]--;
                sum -= nums[l];
                if (mp[nums[l]] == 0) {
                    mp.erase(nums[l]);
                }
                l++;
            }
            if(r-l+1 == k && mp.size() == k)maxi = max(maxi,sum );
        }
    return maxi;}
};