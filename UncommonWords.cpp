// https://leetcode.com/problems/uncommon-words-from-two-sentences/

class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        
        stringstream ss1(A);
        stringstream ss2(B);
        vector<string>v1,v2,x;
        string word;
        map<string,int>Map1,Map2;
        
        while(ss1>>word){
            v1.push_back(word);
            Map1[word]++;
        }
         while(ss2>>word){
            v2.push_back(word);
            Map2[word]++;
         }
         for(auto it:v1){
             if(Map1[it]==1 and Map2.find(it)==Map2.end())
                 x.push_back(it);
         }
         for(auto it:v2){
             if(Map2[it]==1 and Map1.find(it)==Map1.end())
                 x.push_back(it);
         }
         return x;
    }
};