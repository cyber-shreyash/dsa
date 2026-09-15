class Solution {
public:
    bool ifpossible(vector<int>& weights, int days, int c) {
        int n = weights.size();
        int count = 1;
        int o = c; // capacity extra copy
        for (int i = 0; i < n; i++) {
            if (o >= weights[i]) {
                o -= weights[i];
            } else {
                count++;
                o = c;
                o -= weights[i];//again after allotting full capacity to count days 
            }
        }
        if (count <= days) {
            return true;
        }
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int sum = 0;
        int maxi=INT_MIN;
        for (int x : weights) {
            sum += x;
            maxi=max(maxi,x);
        }
        int l = maxi;
        int r = sum;
        int ans = INT_MAX;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (ifpossible(weights, days, mid)) {
                r=mid;
            } else {
                l = mid + 1;
            } 
        }
        return r;
    }
};