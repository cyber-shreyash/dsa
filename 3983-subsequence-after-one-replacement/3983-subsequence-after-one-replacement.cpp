class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int n =s.size(),m=t.size();
        vector<int>pref(n+1,-1);//prefix
        pref[0]=-1;
        int j =0;
        for(int i =0;i<n;i++){
            while(j<m && t[j]!=s[i]){
                j++;
            }
            if(j==m){
                break;
            }
            pref[i+1]=j;
            j++;
        }
        vector<int>suff(n+1,-1);
        suff[n]=m;
        j=m-1;
        for(int i=n-1;i>=0;i--){
            while(j>=0 && t[j]!=s[i]){
                j--;
            }
            if(j<0){
                break;
            }
            suff[i]=j;
            j--;
        }
        if(pref[n]!=-1){
            return true;
        }
        for(int i =0;i<n;i++){
            if(i>0 && pref[i]==-1){
                continue;
            }
            if(i<n-1 && suff[i+1]==-1){
                continue;
            }
            int left=pref[i];
            int right=0;
            if(i==n-1){
                right=m;
            }
            else{
                right=suff[i+1];
            }
            if(left+1<right){
                return true;
            }
        }
    return false;}
};