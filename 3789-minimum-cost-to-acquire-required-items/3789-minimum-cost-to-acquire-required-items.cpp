class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long p=min(need1,need2);
        long long c=p*min(costBoth,cost1+cost2);

        long long rem1=need1-p;
        long long rem2=need2-p;

        c+=rem1*min(cost1,costBoth);
        c+=rem2*min(cost2,costBoth);

        return c ;




    }
};