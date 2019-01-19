// https://leetcode.com/problems/subsets-ii/

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int range=(int)(1<<nums.size());
        vector <int> r;
        vector <vector<int> > res;
        set <vector<int> > Set;
        for(int i=0;i<range;i++){
            for(int j=0;j<nums.size();j++){
                int mask=(1<<j);
                if(mask&i) r.push_back(nums[j]);
            }
            Set.insert(r);
            r.clear();
        }
        for(auto it: Set){
            res.push_back(it);
        }
        return res;
    }
};