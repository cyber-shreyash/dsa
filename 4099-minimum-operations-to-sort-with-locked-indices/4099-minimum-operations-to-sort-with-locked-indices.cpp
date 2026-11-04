class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& locked, int k) {
        int n = nums.size();
        int m = locked.size();
        int ans=0;
        for(int i =0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]>nums[j]){
                    if(locked[i]){
                        if(k==0){return -1;}
                        ans++;
                        locked[i]=0;
                        k--;
                    }
                    if(locked[j]){
                        if(k==0){return -1;}
                            ans++;
                            locked[j]=0;
                            k--;
                    }
                    swap(nums[i],nums[j]);
                    ans++;
                }
            }
        }
    return ans;}
};