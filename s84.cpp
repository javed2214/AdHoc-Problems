// https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int hash1[26],hash2[26];
        
        memset(hash1,0,sizeof(hash1));
        memset(hash2,0,sizeof(hash2));
        
        for(int i=0;i<s.length();i++)
            hash1[s[i]-'a']++;
        for(int i=0;i<t.length();i++)
            hash2[t[i]-'a']++;
        for(int i=0;i<26;i++){
            if(hash1[i]!=hash2[i])
                return false;
        }
        return true;
    }
};