// https://leetcode.com/problems/detect-capital/

class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int p=0,q=0,flag=0;
        for(int i=0;i<word.length();i++){
            if(word[i]>='a' and word[i]<='z') p++;
            if(word[i]>='A' and word[i]<='Z') q++;
            if(word[0]>='A' and word[0]<='Z') flag=1;
        }
        if(p==word.length()) return true;
        if(q==word.length()) return true;
        if(flag==1 and p==word.length()-1) return true;
        return false;
    }
};