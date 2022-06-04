class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int front=0;
        int rear=numbers.size()-1;
        int currentSum;
        while(front<rear)
        {
            currentSum=numbers[front]+numbers[rear];
            if(currentSum>target)
                rear--;
            else if(currentSum<target)
                front++;
            else
                return {front+1,rear+1};
        }
        return {-1,-1};
    }
};