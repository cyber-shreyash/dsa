class Solution {
public:
    bool isVowel(char c) {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
            c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return true;
        }
        return false;
    }
    string sortVowels(string s) {
        vector<char>v;
        for(char c:s){
            if(isVowel(c)){
                v.push_back(c);
            }
        }
        sort(v.begin(),v.end());
        int vi=0;
        for(int i =0;i<s.size();i++){
            if(isVowel(s[i])){
                s[i]=v[vi];
                vi++;
            }
        }
        return s;
    }
};