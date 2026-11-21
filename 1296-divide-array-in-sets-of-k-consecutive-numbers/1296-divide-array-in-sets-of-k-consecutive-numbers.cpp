class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n = nums.size();
        if(n%k!=0){
            return false;
        }
        unordered_map<int,int>mp;
        for(int i =0;i<n;i++){
            mp[nums[i]]++;
        }
        sort(nums.begin(),nums.end());
        for(auto x: nums){
            if(mp[x]==0){
                continue;
            }
            for(int j=0;j<k;j++){
                if(mp[x+j]==0){
                    return false;
                }
                mp[x+j]--;
            }
        }
        return true;
    }
};