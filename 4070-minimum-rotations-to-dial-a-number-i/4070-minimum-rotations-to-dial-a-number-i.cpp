class Solution {
public:
    int minRotations(string s) {
        int n = s.size();

        int mini = INT_MAX;
        // a=[0,1,2,3,4,5,6,7,8,9]
        int first = s[0] - '0';
        int count = min(first, 10-first);
        for (int i = 1; i < n; i++) {
            int b = abs((s[i] - '0') - (s[i - 1] - '0'));
            mini = min(b, 10 - b);
            count += mini;
        }
        return count;
    }
};