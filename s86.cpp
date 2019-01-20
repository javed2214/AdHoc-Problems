// https://leetcode.com/problems/first-missing-positive

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
       if(nums.size()==0) return 1;
       if(nums.size()==1 and nums[0]>=0 and nums[0]!=1) return 1;
       if(nums.size()==1 and nums[0]<0) return 1;
       map <int,bool> Map;
       for(int i=0;i<nums.size();i++)
           Map[nums[i]]=true;
        int x=*max_element(nums.begin(),nums.end());
        for(int i=1;i<=x;i++){
            if(Map.find(i)==Map.end()) return i;
        }
        return (x+1);
    }
};