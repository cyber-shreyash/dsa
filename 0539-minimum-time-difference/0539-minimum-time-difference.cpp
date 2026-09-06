class Solution {
public:
    int findMinDifference(vector<string>& t){
        int n = t.size();
        vector<int> mins(n );
        for (int i = 0; i < n; i++) {
            int hr = stoi(t[i].substr(0, 2));
            int min = stoi(t[i].substr(3));
            mins[i] = 60 * hr + min;
        }
        sort(mins.begin(), mins.end());

        int mini = INT_MAX;
        for (int i = 0; i < mins.size()-1 ; i++) {
            mini = min(mini, mins[i + 1] - mins[i]);
        }
        mini = min(mini,1440- mins.back() + mins.front());
        return mini;
    }
};