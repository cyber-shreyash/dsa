class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        string k = "";
        for (int i = 0; i < n / 2; i++) {
            k += s[i];
        }
        sort(k.begin(), k.end());
        string ans= k;

        if(n%2){
            ans+=s[n/2];
        }
        reverse(k.begin(),k.end());
        ans+=k;
        return ans;
    }
};