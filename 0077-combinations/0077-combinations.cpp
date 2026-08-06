class Solution {
public:
    void help(int n , int k, vector<int>&a , vector<vector<int>>&b,int idx){
        if(a.size()==k){
            b.push_back(a);
            return;
        }
        for(int i=idx;i<=n;i++){
            a.push_back(i);
            help(n,k,a,b,i+1);
            a.pop_back();
        }

    }
    vector<vector<int>> combine(int n, int k) {
       vector<int>a ;
       vector<vector<int>>b;
       help(n,k,a,b,1);

       return b;
    }    
};