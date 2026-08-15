class Solution {
public:
    string compressedString(string word) {
        string ws = "";
        int n = word.size();
        int j = 0;
        int i =0;
        int width = 0;
        while(i<n) {
            j = i;
            while (j < n && word[i] == word[j]) {
                j++;
            }
            int count = j - i;
            while (count > 9) {
                ws.push_back('9');
                width++;
                ws.push_back(word[i]);
                count -= 9;
            }
            ws.push_back(count+ '0');
            ws.push_back(word[i]);
            i=j;
        }
    return ws;}
};