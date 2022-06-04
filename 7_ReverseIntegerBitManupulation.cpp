class Solution {
public:
    int reverse(int x) {
        long long int min=-2147483648;
        long long int max=2147483647;
        long long int res=0;
        long long int digit;
        
        while(x){
            digit=x%10;
            x=x/10;
            if(res>(max/10) || (res==(max/10) && digit>=max%10)){
                return 0;
            }
            if(res<(min/10) || (res==(min/10) && digit<=min%10)){
                return 0;
            }
            res=res*10+digit;
        }
     return res;   
    }
};