class Solution {
public:
    int minChanges(string s) {
        int n = s.size();
        int c1=0;
        for(int i=0;i<n;i+=2){
            if(s[i]!=s[i+1]){
                c1++;
            }
        }
        return c1;
    }
};