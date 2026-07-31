class Solution {
public:
    void help(vector<int>& candidates, int target ,int idx ,vector<vector<int>>&a , vector<int>&b){
        int n = candidates.size();
        if(target==0){
            a.push_back(b);
            return;
        }
        if(target<0 || idx==n){
            return ;
        }
        for(int i=idx;i<n;i++){
            if(i>idx && candidates[i]==candidates[i-1]){
                continue;
            }
            if(candidates[i]>target){
                break;
            }
        b.push_back(candidates[i]);
        help(candidates,target-candidates[i],i+1,a,b);
        b.pop_back();}
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n = candidates.size();
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>a;
        vector<int>b;
        help(candidates,target,0,a,b);
    return a;
    }
};