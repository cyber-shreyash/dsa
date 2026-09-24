class Solution {
public:
    int sumi(int ni) {
        int k = ni;
        int sum = 0;
        while (k > 0) {
            sum += k % 10;
            k /= 10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        int mini=INT_MAX;
        for(int i =0;i<n;i++){
            if(i==sumi(nums[i])){
                mini=min(mini,i);
            }
        }
        if(mini==INT_MAX){
            return -1;
        }
        return mini;
    }
};