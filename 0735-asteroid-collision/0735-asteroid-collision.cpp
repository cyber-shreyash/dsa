class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        int n = asteroids.size();
        vector<int> a;

        for (int i = 0; i < n; i++) {

            if (st.empty() || asteroids[i] > 0) {
                st.push(asteroids[i]);
            }

            else {
                while (!st.empty() && st.top() > 0 &&
                       st.top() < abs(asteroids[i])) {
                    st.pop();
                }
                if (!st.empty() && st.top() == abs(asteroids[i])) {
                    st.pop();
                } else if (st.empty() || st.top() < 0) {
                    st.push(asteroids[i]);
                }
            }
        }

        while (!st.empty()) {
            a.push_back(st.top());
            st.pop();
        }

        reverse(a.begin(), a.end());

        return a;
    }
};