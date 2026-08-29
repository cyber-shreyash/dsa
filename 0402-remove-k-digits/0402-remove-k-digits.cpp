class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        string o = "";
        stack<char> st;
        for (char c : num) {
            while (!st.empty() && k > 0 && c < st.top()) {
                st.pop();
                k--;
            }
            st.push(c);
        }
        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }
        while (!st.empty()) {
            o += st.top();
            st.pop();
        }

        reverse(o.begin(), o.end());
        int i = 0;
        while (i < o.size() && o[i] == '0') {
            i++;
        }
        o = o.substr(i);
        if (o.empty())
            return "0";
        return o;
    }
};