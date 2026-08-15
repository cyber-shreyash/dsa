class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i =0;
        int write=0;
        while(i<n){
            int j =i;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            chars[write]=chars[i];
            write++;
            int count=j-i;
            if(count>1){
                string s=to_string(count);
                for(char c:s){
                    chars[write]=c;
                    write++;
                }
            }
            i=j;
        }
    return write;}
};