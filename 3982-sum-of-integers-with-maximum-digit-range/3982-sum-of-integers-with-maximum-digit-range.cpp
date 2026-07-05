class Solution {
public:
    int diff(int n){
        int p=n;
        int maxi=0;
        int mini=INT_MAX;
        while(p>0){
            maxi=max(maxi,p%10);
            mini=min(mini,p%10);
            p/=10;
        }
        return maxi-mini;
    }
    int maxDigitRange(vector<int>& nums) {
            vector<pair<int,int>>mp;
        int mm=0;
        int sum=0;
        for(int x:nums){
            mp.push_back({x,diff(x)});
            mm=max(mm,diff(x));
        }
        for(auto &x:mp){
            if(x.second == mm){
                sum+=x.first;
            }
        }
        return sum;
    }
};