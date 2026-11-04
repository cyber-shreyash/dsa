class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string t = s;
        reverse(t.begin(), t.end());
        return s == t;
    }

    long long cost(vector<int>& nums, int target) {
        long long sum = 0;
        for (int x : nums) {
            sum += abs((long long)x - target);
        }
        return sum;
    }

    long long minimumCost(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int mid = nums[n / 2];

        int left = mid;
        int right = mid;

        while (!isPalindrome(left)) {
            left--;
        }

        while (!isPalindrome(right)) {
            right++;
        }

        return min(cost(nums, left), cost(nums, right));
    }
};