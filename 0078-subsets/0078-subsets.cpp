class Solution {
public:
    void fun(vector<int> &nums ,int n,int idx,vector<int>&p,vector<vector<int>>&tmpo ){
        if(n==idx){
            tmpo.push_back(p);
            return ;
        }

        fun(nums,n,idx+1,p,tmpo);//do not take the element  

        p.push_back(nums[idx]);
        fun(nums,n,idx+1,p,tmpo);//take the element 
        p.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>tmpo;
        vector<int>p;
        fun(nums,n,0,p,tmpo);

        return tmpo;
    }
};