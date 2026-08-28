class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        long long num = 0;
        int i = 0;
        bool ispos = true; // is the number positive
        while (i < n) {
            if (s[i] == ' ') {
            i++;
            }
            else{
                break;
            }
        }
        // if (num > 0 && s[i] == ' ') {
        //     break;
        // }
        if (i < n && s[i] == '-') {
            ispos = false;
            i++;
        }
        else if (i < n && s[i] == '+') {
            i++;
        }
        while (i < n && isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');
            if (ispos && num > INT_MAX) {
                return INT_MAX;
            }
            if (!ispos && num > -(long long)INT_MIN) {
                return INT_MIN;
            }
            i++;
        }

        if (!ispos) {
            num = -1 * num;
        }
        return num;
    }
};