class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int hashTable[150]={0};
        int balloon[150]={0};
        string target="balloon";
        int res=text.length();
        
        for(int i=0;i<text.length();i++){
            hashTable[text[i]]+=1;
        }
        for(int i=0;i<target.length();i++){
            balloon[target[i]]+=1;
        }
        for(int i=0;i<target.length();i++){
            res=min(res,hashTable[target[i]]/balloon[target[i]]);
        }
        return res;
    }
};