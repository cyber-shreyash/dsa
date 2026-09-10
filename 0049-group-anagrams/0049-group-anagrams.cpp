class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>>mp;
        for(string s : strs){
            string k=s;
            sort(k.begin(),k.end());
            mp[k].push_back(s);
        }
        vector<vector<string>>res;
        for(auto e:mp){
            res.push_back(e.second);
        }
    return res;}
};