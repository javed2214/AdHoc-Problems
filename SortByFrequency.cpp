// https://leetcode.com/problems/sort-characters-by-frequency/

class Solution {
public:
    
    static bool Compare(pair<char,int>&p1, pair<char,int>&p2){
        
        if(p1.second==p2.second)
            return (p1.first>p2.first);
        
        return p1.second>p2.second;
    }
    
    string frequencySort(string s) {
        
        map<char,int>Map;
        if(s.length()==0) return "";
        for(auto it:s)
            Map[it]++;
        int siz=Map.size();
        pair<char,int>Pair[siz];
        int i=0;
        for(auto it:Map){
            Pair[i++]=make_pair(it.first,it.second);
        }
        sort(Pair,Pair+siz,Compare);
        s.clear();
        for(int i=0;i<siz;i++){
            int x=Pair[i].second;
            while(x--)
                s+=Pair[i].first;
        }
        return s;
    }
};