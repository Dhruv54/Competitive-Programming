class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSub=nums[0];
        int currentSum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(currentSum<0)
                currentSum=0;
            currentSum=currentSum+nums[i];
            if(maxSub<currentSum){
                maxSub=currentSum;
            }
        }
        return maxSub;
    }
};