class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int n = s.size();
        int maxlen=0;
        int l=0;
        for(int r =0;r<n;r++){
            mp[s[r]]++;
            while(mp[s[r]]>1){
                mp[s[l]]--;
                if(mp[s[l]]==0){
                    mp.erase(s[l]);
                }
                l++;
            }
            maxlen=max(maxlen,r-l+1);
        }
    return maxlen;}
};