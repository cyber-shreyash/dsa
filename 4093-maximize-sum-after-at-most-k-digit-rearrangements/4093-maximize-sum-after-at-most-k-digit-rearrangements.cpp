class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        long long sum = 0;
        int gain = 0;
        int n = nums.size();
        vector<int> y;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            vector<int> dig;
            int num = nums[i];
            int pum = num;
            while (num > 0) {
                dig.push_back(num % 10);
                num /= 10;
            }
            sort(dig.rbegin(), dig.rend());
            int big = 0;
            for (int i = 0; i < dig.size(); i++) {
                big = big * 10 + dig[i];
            }
            gain=big-pum;
            y.push_back(gain);
        }
        sort(y.begin(), y.end());
        int i = y.size()-1;
        while (k--) {
            sum += y[i];
            i--;
        }
        return sum;
    }
};