class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int esum=0;
        int osum=0;
        for(int i=2;i<2*n+1;i=i+2){esum=esum+i;}
        for(int j=1;j<2*n;j=j+2){osum=osum+j;}
        while(esum>0 && osum>0){
            if(esum>osum){
                esum=esum%osum;
            }
            else{      
                osum=osum%esum;
            }}
            if(esum==0){
                return osum;
            }
            return esum;
    }
};