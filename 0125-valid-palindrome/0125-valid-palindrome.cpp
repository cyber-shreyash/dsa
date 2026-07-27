class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        bool a=true;
        while(i<j){
            if(!isalnum(s[i])){i++;continue;}
            if(!isalnum(s[j])){j--;continue;}
         if(tolower(s[i])==tolower(s[j])){
            a= true;
            i++;j--;
        }
         else{
            a= false;
            break;
        }
        }
    return a;}
};