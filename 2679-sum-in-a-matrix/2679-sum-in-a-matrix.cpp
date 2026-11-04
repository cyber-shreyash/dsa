class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        long long sum=0;
        for(int i =0;i<n;i++){
            sort(nums[i].begin(),nums[i].end());
        }
        for(int i =0;i<m;i++){
            int maxi=0;
            for(int j =0;j<n;j++){
                maxi=max(maxi,nums[j][i]);
            }
            sum+=maxi;
        }
        return sum;
    }
};