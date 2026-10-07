class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0;
        if(nums.size()==1 && nums[0]==0){
            return 0;
        }
        while (true) {
            bool zero = true;
            for (int &x : nums) {
                if (x > 0) {
                    zero = false;
                    if (x % 2) {
                        x--;
                        count++;
                    }
                }
            }
            if (zero) break;
            for (int &x : nums){
                x /= 2;}
            count++;
        }
        return count-1;
    }
};