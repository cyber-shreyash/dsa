class Solution {
public:
     void fun(vector<int> &nums,int idx,vector<int> &a,vector<vector<int>> &result){
        int n = nums.size();
        if(idx==n){
            result.push_back(a);
            return;
        }
        fun(nums,idx+1,a,result);//does not take current element

        a.push_back(nums[idx]);
        fun(nums,idx+1,a,result);//takes the current element
        a.pop_back();//backtracking using pop
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>a;
        vector<vector<int>>result;
        int idx=0;
        fun(nums,idx,a,result);
        return result;
    }
};