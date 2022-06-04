class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int rightMax=-1,newMax=0;
        int n=arr.size()-1;
        for(int i=n;i>=0;i--)
        {
            if(rightMax<arr[i]){
                newMax=arr[i];
            }
            arr[i]=rightMax;
            rightMax=newMax;
        }
        return arr;
    }
};