class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> res;

        int l = 0;
        multiset<int> st;

        for (int r = 0; r < n; r++) {
            st.insert(nums[r]);

            while (r - l + 1 > k) {
                st.erase(st.find(nums[l]));
                l++;
            }
            if (r - l + 1 == k) {
                res.push_back(*st.rbegin());
            }
        }
        return res;
    }
};