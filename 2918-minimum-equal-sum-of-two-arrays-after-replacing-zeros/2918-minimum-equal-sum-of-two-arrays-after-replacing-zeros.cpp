class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long ans = 0;
        int n = nums1.size();
        int m = nums2.size();
        long long sum1 = 0;
        long long sum2 = 0;
        int count1 = 0;
        int count2 = 0;
        for (int x : nums1) {
            if (x == 0) {
                count1++;
            }
            sum1 += x;
        }
        for (int x : nums2) {
            if (x == 0) {
                count2++;
            }
            sum2 += x;
        }
        long long min1=sum1+count1;
        long long min2=sum2+count2;
        if(min1==min2){
            return min1;
        }
        if(min1<min2){
            if(count1==0){
                return -1;
            }
            return min2;
        }
        if(min1>min2){
            if(count2==0){
                return -1;
            }
            return min1;
        }
        return -1;}
};