class Solution {
public:
    int appendCharacters(string s, string t) {
        int n=s.size();
        int m = t.size();
        int l =0;
        int r=0;
        int count =0;
        while(l<m && r<n){
            if(t[l]!=s[r]){
                r++;
            }
            else{
                l++;
                r++;
                count++;
            }
        }
        return m-count;
    }
};