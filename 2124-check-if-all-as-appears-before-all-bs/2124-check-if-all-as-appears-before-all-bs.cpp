class Solution {
public:
    bool checkString(string s) {
        int n = s.size();
        int i=0;
        while(i<n){
            if(s[i]=='a'){
                    i++;
            }
            if(s[i]=='b'){
                if(s[i+1]=='a'){
                    return false;
                }
                else{
                    i++;
                }
            }
        }
    return true;}
};