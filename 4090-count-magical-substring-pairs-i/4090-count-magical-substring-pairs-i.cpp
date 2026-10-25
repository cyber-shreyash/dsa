class Solution {
public:
    int countMagicalPairs(string s) {
        int n = s.size();
        int res=0;
        for(int j =0;j<n-1;j++){
            int l[27]={0};
            int freq[26]={0};
            int distinct=0;
            for(int i =j;i>=0;i--){
                int ch = s[i]-'a';
                if(freq[ch]==0){
                    distinct++;
                }
                freq[ch]++;
                l[distinct]++;
            }
            int r[26]={0};
            distinct=0;
            for(int k =j+1;k<n;k++){
                int ch= s[k]-'a';
                if(r[ch]==0){
                    distinct++;
                }
                r[ch]++;
                res+=l[distinct];
            }

        }
    return res;}
};