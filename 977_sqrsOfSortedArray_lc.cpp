class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        int n=nums.size();
        
        while(left<=right){
            if(nums[left]*nums[left]>nums[right]*nums[right]){
                nums.push_back(nums[left]*nums[left]);
                left++;
            }
            else{
                nums.push_back(nums[right]*nums[right]);
                right--;
            }
        }
        nums.erase(nums.begin(),nums.begin()+n);
        reverse(nums.begin(),nums.end());
        return nums;
        
    }
};