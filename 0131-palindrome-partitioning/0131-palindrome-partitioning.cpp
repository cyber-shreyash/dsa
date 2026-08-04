class Solution {
public:
    bool isPal(string &s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
    void help(string &s,int n ,int idx,vector<vector<string>>&a,vector<string>&p) {
        if(idx==n){
            a.push_back(p);
            return;
        }
        for(int i =idx;i<n;i++){
            if(isPal(s,idx,i)){
                p.push_back(s.substr(idx,i-idx+1));
                help(s,n,i+1,a,p);
                p.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        int n = s.size();
        vector<vector<string>> a;
        vector<string> p;
        help(s, n, 0,a, p);
        return a;
    }
};