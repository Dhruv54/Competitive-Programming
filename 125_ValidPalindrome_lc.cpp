class Solution {
public:
    bool isPalindrome(string s) {
        string newStr="";
        for(int i=0;i<s.length();i++){
            if(iswalnum(s[i])){
                newStr+=tolower(s[i]);
            }
        }
        return newStr==string(newStr.rbegin(),newStr.rend());
    }
};

class Solution {
public:
    bool isalphNum(char c){
        if(int('A')<= int(c) && int(c) <= int('Z'))
            return true;
        if(int('a')<= int(c) && int(c) <= int('z'))
            return true;
        if(int('0')<= int(c) && int(c) <= int('9'))
            return true;
        
        return false;
    }
    
     bool isPalindrome(string s) {
         int l=0,r=s.length()-1;
         
         while(l<r){
             while(l<r && !isalphNum(s[l])){
                 l++;
             }
             while(l<r  && !isalphNum(s[r])){
                 r--;
             }
             if(tolower(s[l])!=tolower(s[r])){
                 return false;
             }
             l++;r--;
         }
         return true;
    }
    
    // bool isPalindrome(string s) {
    //     string newStr="";
    //     for(int i=0;i<s.length();i++){
    //         if(iswalnum(s[i])){
    //             newStr+=tolower(s[i]);
    //         }
    //     }
    //     return newStr==string(newStr.rbegin(),newStr.rend());
    // }
};