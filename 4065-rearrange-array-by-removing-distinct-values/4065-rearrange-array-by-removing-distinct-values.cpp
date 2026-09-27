class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        vector<int> ans;
        for (int x : nums) {
            mp[x]++;
        }
        while (mp.size() != 0) {
            vector<int> temp;
            for (auto it = mp.begin(); it != mp.end();) {
                temp.push_back(it->first);
                it->second--;
                if (it->second == 0) {
                    it = mp.erase(it);
                } 
                else {
                    it++;
                }
            }
            sort(temp.begin(), temp.end());
            for (int x : temp) {
                ans.push_back(x);
            }
        }
        return ans;
    }
};