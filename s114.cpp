// https://leetcode.com/problems/word-pattern/

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        
        stringstream ss(str);
        map<char,string>Map;
        map<string,char>Map1;
        string word;
        vector<string>v;
        while(getline(ss,word,' ')){
            v.push_back(word);
        }
        if(v.size()==pattern.length()){
            for(int i=0;i<pattern.length();i++){
                if(Map.find(pattern[i])==Map.end() and Map1.find(v[i])==Map1.end()){
                    Map[pattern[i]]=v[i];
                    Map1[v[i]]=pattern[i];
                }
                else{
                    if(Map[pattern[i]]!=v[i] or Map1[v[i]]!=pattern[i])
                        return false;
                }
            }
        }
        else return false;
        
        return true;
    }
};