class Solution {
public:
    bool ifpossible(vector<int>&nums,int &mid,int &m){
        int n = nums.size();
        long long count=0;
        for(int i =0;i<n;i++){
            if(nums[i]%mid != 0){
                count+=(nums[i]/mid +1)-1;//no of divisions required = no of final parts - 1 (divide 1 into 2 , divide 2 into 3)
            }
            else{
                count+=nums[i]/mid -1;
            }
        }
        if(count>m){
            return false;
        }
        else{
            return true;
        }
        return true;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        int n = nums.size();
        int l=1;
        int ans=0;
        int r=*max_element(nums.begin(),nums.end());
        while(l<=r){
            int mid=l+(r-l)/2;
            if(ifpossible(nums,mid,maxOperations)){
                ans=mid;
                r=mid-1;//to check the minimum possible value 
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};