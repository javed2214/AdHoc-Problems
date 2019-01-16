// https://leetcode.com/problems/length-of-last-word/

class Solution {
public:
    int lengthOfLastWord(string str) {
        
        if(str.length()==0) return 0;
        for(int i=0;!isalpha(str[i]) and i<str.length();i++)
            str.erase(str.begin()+i);
        if(str.length()==0) return 0;
        for(int i=str.length()-1;!isalpha(str[i]) and i<str.length();i--)
            str.erase(str.begin()+i);
        if(str.length()==0) return 0;
        
        stringstream ss(str);
        string word;
        vector <string> v;
        
        while(getline(ss,word,' '))
            v.push_back(word);

        return v[v.size()-1].length();
    }
};