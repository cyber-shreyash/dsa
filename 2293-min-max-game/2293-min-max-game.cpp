class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n = nums.size();
        while(n>1){
            int i = 0;
            for(int j = 0; j<n; j += 2){
                if(i%2 == 0)
                nums[i++] = min(nums[j] , nums[j+1]);
                else
                nums[i++] = max(nums[j] , nums[j+1]);
            }
            n /= 2;
        }
        return nums[0];
    }
};