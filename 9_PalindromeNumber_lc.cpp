class Solution {
public:
    bool isPalindrome(int x) {
        int c=x;
        if(x<0)
            return false;
        if(x==0)
            return true;
        
        long long int rev=0;
        while(x){
            rev=rev*10+(x%10);
            x=x/10;
        }
        return (c==rev);
    }
};
