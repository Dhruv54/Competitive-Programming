class Solution {
public:
    int lengthOfLastWord(string s) {
        int lenlw=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i] == ' ' && lenlw){
                return lenlw;
            }else if(s[i] != ' '){
                lenlw++;
            }
        }
        return lenlw;
    }
};