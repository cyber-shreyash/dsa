class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long sumi=0;
        long long sumii=0;
        for(int x:source){
            sumi+=x;
        }
        for(int x:target){
            sumii+=x;
        }
        return sumi==sumii;
    }
};