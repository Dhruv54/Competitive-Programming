class Solution {
public:
    bool isPerfectSquare(int num) {
        // #1:-O(sqrt(n))        
        // if(num==1) return true;
        // for(long long int i=1;i<=(num/2);i++){
        //     if(i*i==num) return true;
        //     if(i*i>num) return false;
        // }
        // return false;
        // #2:- O(logn)
        if(num==1)  return true;
        long long int left=1,right=num,mid;
        while(left<=right){
            mid=(left+right)/2;
            if(mid*mid>num){
                right=mid-1;
            }else if(mid*mid<num){
                left=mid+1;
            }else{
                return true;
            }
        }
        return false;
    }
};