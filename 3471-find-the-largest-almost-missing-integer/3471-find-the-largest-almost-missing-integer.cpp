class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        int l = 0;
        int maxi = -1;
        for(int r = 0; r < n; r++) {
            mp1[nums[r]]++;
            if(r - l + 1 == k) {
                for(auto x : mp1) {
                    mp2[x.first]++;
                }
                mp1[nums[l]]--;
                if(mp1[nums[l]] == 0) {
                    mp1.erase(nums[l]);
                }
                l++;
            }
        }
        for(auto x : mp2) {
            if(x.second == 1) {
                maxi = max(maxi, x.first);
            }
        }
        return maxi;
    }
};