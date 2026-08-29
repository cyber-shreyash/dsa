class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int maxi=0;
        unordered_map<int, int> mp;
        for (int r = 0; r < n; r++) {
            mp[nums[r]]++;
            while(mp[0]>k){
                mp[nums[l]]--;
                if(mp[nums[l]]==0){
                    mp.erase(nums[l]);
                }
                l++;
            }
            maxi=max(maxi,r-l+1);
        }
    return maxi;}
};