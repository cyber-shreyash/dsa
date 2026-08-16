class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int maxi=*max_element(lights.begin(),lights.end());
        int res=0;
        for(int t :arrivalTime){
            int r=t%period;
            int wait=0;
            if(r>=maxi){
                wait=period-r;
            }
            res=max(res,wait);
        }
        return res;
    }
};