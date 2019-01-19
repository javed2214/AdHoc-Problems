// https://leetcode.com/problems/combination-sum/

class Solution {
public:
    
    void CSum(vector<int>&v, int sum, vector<vector<int> >&res, vector<int> &r, int i){
        
        if(sum<0) return;
        if(sum==0){
            res.push_back(r);
            return;
        }
        while(i<v.size() and sum-v[i]>=0){
            
            r.push_back(v[i]);
            CSum(v,sum-v[i],res,r,i);
            i++;
            r.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& v, int sum) {
        
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        vector <vector<int> > res;
        vector <int> r;
        CSum(v,sum,res,r,0);
        
        return res;
    }
};