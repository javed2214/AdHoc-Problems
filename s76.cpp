// https://leetcode.com/problems/permutations-ii/

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        map <vector<int>, int> Map;
        vector <vector<int> > v;
        sort(nums.begin(),nums.end());
        do{
            Map[nums]++;
        }while(next_permutation(nums.begin(),nums.end()));
        for(auto it:Map){
            v.push_back(it.first);
        }
        return v;
    }
};