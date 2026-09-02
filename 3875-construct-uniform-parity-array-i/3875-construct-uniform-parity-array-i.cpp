class Solution {
public:
    // int checksum(vector<int>& v) {
    //     int sum = 0;
    //     for (int x : v) {
    //         sum = sum + x;
    //     }
    //     return sum;
    // }

    bool uniformArray(vector<int>& nums1) {

        int even = 0;
        int odd = 0;

        for (int x : nums1) {
            if (x % 2 == 0) even++;
            else odd++;
        }
        if (even == nums1.size() || odd == nums1.size()) {
            return true;
        }

        if (even > 0 && odd > 0) {
            return true;
        }

        return false;
    }
};