class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
        
//         for(int i=0;i<s.length();i++)
//         {
//             if(s[i]!=t[i])
//                 return false;
//         }
//         return true;
        
        int count1[256]={0};
        int count2[256]={0};
        
        for(int i=0;i<s.length();i++)
        {
            count1[s[i]]++;
            count2[t[i]]++;
        }
        
        for(int i=0;i<s.length();i++)
        {
            if(count1[s[i]]!=count2[s[i]])
                return false;
        }
        return true;
    }
};