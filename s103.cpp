// https://leetcode.com/problems/ransom-note/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       
        int map[26]={0};
        for(auto t:magazine){
            map[t-'a']++;
        }
        for(auto t:ransomNote){
            if(map[t-'a']){
                --map[t-'a'];
            }
            else{
                return false;
            }
        }
        return true;
    }
};