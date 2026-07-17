class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int> remcount;
        for (int i : arr) {
            remcount[(i % k + k) % k]++;
        }
        for (auto i : arr) {
            int rem = (i % k + k) % k;
            if (rem == 0) {
                if (remcount[rem] % 2 == 1)
                    return false;
            } else if (remcount[rem] != remcount[k - rem])
                return false;
        }
        return true;
    }
};