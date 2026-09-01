class Solution {
public:
    string multiply(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();
        vector<int> ans(n + m);
        if (num1 == "0" || num2 == "0") {
            return "0";
        }

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                ans[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
                ans[i + j] = ans[i + j] + ans[i + j + 1] / 10;
                ans[i + j + 1] = ans[i + j + 1] % 10;
            }
        }

        string s = "";
        int p = 0;
        while (ans[p] == 0) {
            p++;
        }
        for (int i = p; i < ans.size(); i++) {

            s += to_string(ans[i]);
        }
        return s;
    }
};