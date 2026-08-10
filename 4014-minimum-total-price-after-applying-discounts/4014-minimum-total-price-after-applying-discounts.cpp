class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(), prices.end());
        sort(discounts.begin(), discounts.end());
        int n = prices.size();
        int m = discounts.size();
        int i = n - 1;
        int j = m - 1;
        double sum = 0;
        while (i >= 0 && j >= 0) {
            sum += (double)prices[i] * ((100.0 - discounts[j]) / 100.0);
            i--;
            j--;
        }
        if (i >= 0) {
            for (int k = 0; k <= i; k++) {
                sum += (double)prices[k];
            }
        }
        return sum;
    }
};