class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int res=-1;
        int n = drones.size();
        int minDist=INT_MAX;
        for(int i =0;i<n;i++){
            int x=drones[i][0];
            int y=drones[i][1];
            int range=drones[i][2];
            int dist=abs(x-target[0])+abs(y-target[1]);
            if(dist<=range){
                if(dist<minDist){
                    minDist=dist;
                    res=i;
                }
            }
        }
        return res;
    }
};