// https://leetcode.com/problems/keyboard-row/

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
        vector<char>v1,v2,v3;
        v1={'Q','W','E','R','T','Y','U','I','O','P','q','w','e','r','t','y','u','i','o','p'};
        v2={'A','S','D','F','G','H','J','K','L','a','s','d','f','g','h','j','k','l'};
        v3={'Z','X','C','V','B','N','M','z','x','c','v','b','n','m'};
        
        int o=0,t=0,th=0;
        vector<string>v;
        for(int i=0;i<words.size();i++){
            for(auto it:words[i]){
                if(find(v1.begin(),v1.end(),it)!=v1.end())
                    o++;
                else if(find(v2.begin(),v2.end(),it)!=v2.end())
                    t++;
                else if(find(v3.begin(),v3.end(),it)!=v3.end())
                    th++;
            }
            if(o==words[i].length() or t==words[i].length() or th==words[i].length())
                v.push_back(words[i]);
            o=0;t=0;th=0;
        }
        
        return v;
    }
};