class Solution {
public:
    bool ifpossible(vector<int>& position, int m,int &mid){
        int count=1;
        int n = position.size();
        int prev=position[0];
        for(int i =1;i<n;i++){
            if(position[i]-prev>=mid){
                count++;
                prev=position[i];
            }
        }
        if(count>=m){
            return true;
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(),position.end());
        int ans=0;
        int l = 1;
        int r = position[n-1]-position[0];
        while(l<=r){
            int mid=l+(r-l)/2;
            if(ifpossible(position,m,mid)){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
    return ans;
    }
};