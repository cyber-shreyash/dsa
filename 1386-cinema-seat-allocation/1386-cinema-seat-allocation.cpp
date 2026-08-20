class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

        unordered_map<int, set<int>> mp;

        // Store reserved seats for each row
        for (auto &x : reservedSeats) {
            mp[x[0]].insert(x[1]);
        }

        // Initially, every row can have 2 groups
        int ans = 2 * n;

        // Check only rows that have reservations
        for (auto &[row, seats] : mp) {

            bool left = true;
            bool middle = true;
            bool right = true;

            for (int i = 2; i <= 5; i++) {
                if (seats.count(i)) {
                    left = false;
                }
            }

            for (int i = 4; i <= 7; i++) {
                if (seats.count(i)) {
                    middle = false;
                }
            }
            for (int i = 6; i <= 9; i++) {
                if (seats.count(i)) {
                    right = false;
                }
            }
            if (left && right) {
            }
            else if (left || middle || right) {
                ans--;
            }
            else {
                ans -= 2;
            }
        }

        return ans;
    }
};