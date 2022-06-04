class Solution {
public:
    bool isPresent(vector<int> vec, int elem)
    {
        return any_of(vec.begin(), vec.end(), [&](const auto & x){
            return x == elem;
        });
    }
    
    bool isHappy(int n) {
        vector<int>set{};
        while(n){
            if(isPresent(set,n)){
                return false;
            }
            set.push_back(n);
            n=sumOfSquare(n);
            if(n==1){
                return true;
            }
        }
        return false;
    }
    int sumOfSquare(int n){
        int output=0;
        int digit;
        while(n){
            digit=n%10;
            digit=digit*digit;
            output=output+digit;
            n=n/10;
        }
        return output;
    }
};