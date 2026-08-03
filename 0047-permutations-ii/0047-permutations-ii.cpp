class Solution {
public:

    void help(vector<int>& nums, set<vector<int>>& s, int n, vector<bool>&vis, vector<int>& p,
              map<int, int> &mp) {
                if(p.size()==n){
                    s.insert(p);
                    return;
                }
                for(int i=0;i<n;i++){
                    if(!vis[i]){
                        vis[i]=true;
                        p.push_back(nums[i]);
                        help(nums,s,n,vis,p,mp);
                        p.pop_back();
                        vis[i]=false;
                    }
                }
              }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
                        vector<bool>vis(n,false);

        vector<int> p;
        map<int, int> mp;
        set<vector<int>> s;
        help(nums, s, n, vis, p,mp);
        vector<vector<int>> q(s.begin(), s.end());
        return q;
    }
};