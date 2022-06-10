class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int ST[256]={0};
        int TS[256]={0};
        
        for(int i=0;i<s.length();i++){
            if((ST[s[i]]!=0 && ST[s[i]]!=t[i]) || (TS[t[i]]!=0 && TS[t[i]]!=s[i]))
                return false;
            ST[s[i]]=t[i];
            TS[t[i]]=s[i];
        }
        return true;
    }
};