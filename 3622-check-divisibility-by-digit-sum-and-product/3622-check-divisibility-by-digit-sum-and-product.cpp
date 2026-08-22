class Solution {
public:
    bool checkDivisibility(int n) {
        int k = n;
        int prod=1;
        int sum=0;
        while(k>0){
            sum+=k%10;
            prod*=k%10;
            k/=10;
        }
        if(n%(sum+prod)==0){
            return true;
        }
        return false;
    }
};