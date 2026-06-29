class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        int minele = INT_MAX;

        for(int i=0;i<nums1.size();i++)
            {
                minele = min(minele,nums1[i]);
            }

        if(minele%2==0)
        {
            for(int i=0;i<nums1.size();i++)
                {
                    if(nums1[i]%2!=0)
                    {
                        return false;
                    }
                }
            return true;
        }
    
        return true; 
    }
};