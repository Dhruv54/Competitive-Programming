/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long int left=1,right=n,mid=0,res=0;
        
        while(true){
            mid= (left+right)/2;
            res=guess(mid);
            if(res==1)
                left=mid+1;
            else if(res==-1)
                right=mid-1;
            else if(res==0)
                return mid;
        }
        return -1;
    }
};