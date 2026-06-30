class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            return true;
        }

        return false;
    }

    long long countVowels(string word) {
        int n = word.length();
        long long cnt = 0;

        for(int i=0; i<n; i++){
            if(isVowel(word[i])){
                cnt += 1LL * (i+1) * (n-i);
            }
        }

        return cnt;

    }
};