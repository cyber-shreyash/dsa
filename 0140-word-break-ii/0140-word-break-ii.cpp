class Solution {
public:
    bool is(vector<string>&wordDict,string &s,int o,int idx){
        string k="";
        for(int i = idx;i<=o;i++){
            k+=s[i];
        }
        if(find(wordDict.begin(),wordDict.end(),k)!=wordDict.end()){
            return true;
        }
        return false;
    }
    void help(string &s, vector<string>&wordDict,string &p,vector<string>&a,int idx){
        if(idx==s.size()){
            p.pop_back();
            a.push_back(p);
            p.push_back(' ');
            return ;
        }
        for(int i =idx;i<s.size();i++){
            if(is(wordDict,s,i,idx)){
                string word=s.substr(idx,i-idx+1);
                p+=word +" ";
                help(s,wordDict,p,a,i+1);
                p.resize(p.size()-word.size()-1);
            }
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        string p;
        vector<string>a;
        help(s,wordDict,p,a,0);
        return a;
    }
};