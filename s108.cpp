// https://leetcode.com/problems/number-of-segments-in-a-string/

class Solution {
public:
    int countSegments(string str) {
        
        stringstream ss(str);
        vector<string>v;
        string word;
        while(getline(ss,word,' ')){
            v.push_back(word);
        }
        int c=0;
        for(auto it:v){
            if(it!="")
                c++;
        }
        return c;
    }
};
