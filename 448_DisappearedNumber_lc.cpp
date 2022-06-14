class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int index=0;
        for(int i=0;i<nums.size();i++){
            index=abs(nums[i])-1;
            nums[index]=-1*abs(nums[index]);
        }
        int size=nums.size();
        for(int i=0;i<size;i++){
            if(nums[i]>0){
                nums.push_back(i+1);
            }
        }
        nums.erase(nums.begin(),nums.begin()+size);
        return nums;
    }
};