class Solution {
public:
    void help(string& digits, vector<string>& a, map<int, string>& mp, int n,
              int idx, string& s) {
        if (idx == n) {
            a.push_back(s);
        }
        string letters=mp[digits[idx]-'0'];
        
        for(char ch : letters){
            s.push_back(ch);
            help(digits,a,mp,n,idx+1,s);
            s.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        vector<string> a;
        map<int, string> mp = {{2, "abc"}, {3, "def"}, {4, "ghi"},
                               {5, "jkl"}, {6, "mno"}, {7, "pqrs"},
                               {8, "tuv"}, {9, "wxyz"}};
        string s;
        help(digits, a, mp, n, 0, s);
        return a;
    }
};