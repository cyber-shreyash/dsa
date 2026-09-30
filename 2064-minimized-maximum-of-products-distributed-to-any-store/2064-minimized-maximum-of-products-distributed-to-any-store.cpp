class Solution {
public:
    bool ifpossible(int &n,vector<int>&nums,int &mid){
        int m = nums.size();
        long long count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%mid !=0){
                count+=nums[i]/mid +1;
            }
            else{
                count+=nums[i]/mid ;
            }
        }
        if(count>n){
            return false;
        }
        return true;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int m = quantities.size();
        int l = 1;
        int ans=0;
        int r = *max_element(quantities.begin(),quantities.end());
        while(l<=r){
            int mid=l+(r-l)/2;
            if(ifpossible(n,quantities,mid)){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};