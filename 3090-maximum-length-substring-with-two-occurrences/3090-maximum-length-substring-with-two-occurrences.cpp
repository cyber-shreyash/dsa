class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n =s.size();
        int l=0;
        int maxi=0;
        unordered_map<char,int>mp;
        for(int r=0;r<n;r++){
            mp[s[r]]++;
            while(mp[s[r]]>2){
                mp[s[l]]--;
                if(mp[s[l]]==0){
                    mp.erase(s[l]);
                }
                l++;
            }
            maxi=max(maxi,r-l+1);
        }
    return maxi;}
};