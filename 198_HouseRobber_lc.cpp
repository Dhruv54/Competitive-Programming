class Solution {
public:
    int rob(vector<int>& nums) {
        int rob1=0;
        int rob2=0;
        int temp;
        for(int i=0;i<nums.size();i++)
        {
            if((nums[i]+rob1)>rob2)
                temp=nums[i]+rob1;
            else
                temp=rob2;
            
            rob1=rob2;
            rob2=temp;
        }
        return rob2;
    }
};