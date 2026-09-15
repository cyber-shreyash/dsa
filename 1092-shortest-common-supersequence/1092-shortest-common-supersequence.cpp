class Solution {
public:
    string lcs(string &s,string &p){
        int n = s.size();
        int m = p.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j =1;j<=m;j++){
                if(s[i-1]==p[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        string k = "";
        int i =n;//s string 
        int j =m;//p string
        while(i>0 && j>0){
            if(s[i-1]==p[j-1]){
                k.push_back(s[i-1]);
                i--;
                j--;
            }
            else {
                    if(dp[i][j-1]>dp[i-1][j]){
                        k.push_back(p[j-1]);
                        j--;
                    }
                    else{
                        k.push_back(s[i-1]);
                        i--;
                        }
                    }
        }
        while(i>0){
            k.push_back(s[i-1]);
            i--;
        }
        while(j>0){
            k.push_back(p[j-1]);
            j--;
        }
        reverse(k.begin(),k.end());
        return k;
    }
    string shortestCommonSupersequence(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();

        return lcs(str1,str2);
    }
};