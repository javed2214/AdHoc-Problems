// https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int> Map;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
            Map[nums[i]]=i;
        for(int i=0;i<nums.size();i++){
            if(Map.find(target-nums[i])!=Map.end() and i!=Map[target-nums[i]]){
                v.push_back(i);
                v.push_back(Map[target-nums[i]]);
                return v;
            }
        }
        return v;
    }
};