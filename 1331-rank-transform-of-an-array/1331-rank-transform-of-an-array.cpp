class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> b(arr.begin(), arr.end());
        sort(arr.begin(), arr.end());
        int n = arr.size();
        map<int, int> mp;
        int rank = 1;

        for (int i = 0; i < arr.size(); i++) {
            if (!mp.count(arr[i])) {
                mp[arr[i]] = rank++;
            }
        }
        for (int i = 0; i < n; i++) {
            b[i] = mp[b[i]];
        }
        return b;
    }
};