class Solution {
public:
    string check(int a ){
        int p=a;
        string s="";
        while(p>0){
            s+=p%2+'0';
            p/=2;
        }
        return s;
    }
    int wow(string a){
        int count=0;
        for(int i =0;i<a.size();i++){
            if(a[i]=='1'){
                count++;
            }
        }
        return count;
    }
    int calculateScore(int a, int b) {
        string aa=check(a);
        string bb=check(b);
        int s1=wow(aa);
        int s2=wow(bb);

        if(s1>=s2){
            return s1*s2;
        }
        return s2/s1;
    }
};