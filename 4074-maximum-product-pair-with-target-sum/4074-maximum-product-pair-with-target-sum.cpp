class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int n = nums.size();
        int maxi=INT_MIN;
        vector<int>res={-1,-1};
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++){
                if(i!=j && nums[i]>nums[j] && (nums[i]+nums[j]) ==target){
                    int prod=nums[i]*nums[j];
                    if(prod>maxi){
                        maxi=prod;
                        res={i,j};
                    }
                }
            }
        }
    return res;}
};