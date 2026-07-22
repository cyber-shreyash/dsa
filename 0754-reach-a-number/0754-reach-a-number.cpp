class Solution {
public:
    int reachNumber(int target) {
        int k = 0;
        int sum = 0;

        while (sum < abs(target) || (sum - abs(target)) % 2 != 0) {
            k++;
            sum += k;
        }

        return k;
    }
};