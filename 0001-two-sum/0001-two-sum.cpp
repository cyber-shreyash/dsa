class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int need = 0;
        vector<int> a;

        for (int i = 0; i < nums.size(); i++) {
            need = target - nums[i];
            if (mp.find(need) != mp.end()) {

                a.push_back(mp[need]);
                a.push_back(i);
            }
            else{
            mp[nums[i]] = i;}
        }
        return a;
    }
};