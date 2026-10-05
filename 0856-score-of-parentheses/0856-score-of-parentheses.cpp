class Solution {
public:
    int scoreOfParentheses(string s) {
        int n = s.size();
        stack<int> st;
        st.push(0);
        int count = 0;
        for (int i = 0; i < n; i++) {
            if ( s[i] == '(') {
                st.push(0);
            }
            else{
                int inner=st.top();
                st.pop();
                int score=0;
                if(inner==0){
                    score=1;
                }
                else{
                    score=2*inner;
                }
                st.top()+=score;
            }

        }
        return st.top();
    }
};