class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int first,second,n=stones.size();
        while(n>1){
            sort(stones.begin(),stones.end());
            first=stones[n-1];
            second=stones[n-2];
            stones.pop_back();
            stones.pop_back();
            if(first>second){
                stones.push_back(first-second);
            }
            n=stones.size();
        }
        if(n==1){
            return stones[0];
        }else{
            return 0;
        }
    }
};