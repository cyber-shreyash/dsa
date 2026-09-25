class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int n=word.size();
        int len=1;
        int count=1;
        int maxi=0;
        for(int i =1;i<n;i++){
            if(word[i-1]==word[i]){
                len++;
            }
            else if(word[i-1]<word[i]){
                len++;
                count++;
            }
            else{
                len=1;
                count=1;
            }
            if(count==5){
                maxi=max(maxi,len);
            }            
        }
    return maxi;}
};