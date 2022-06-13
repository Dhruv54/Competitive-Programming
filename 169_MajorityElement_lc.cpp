class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority_ele=0,count=0;
        
        for(int i=0;i<nums.size();i++){
            if(count==0)
                majority_ele=nums[i];
            if(majority_ele==nums[i])
                count++;
            else
                count--;
        }
        return majority_ele;
    }
};