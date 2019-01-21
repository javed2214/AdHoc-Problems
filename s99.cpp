// https://leetcode.com/problems/longest-consecutive-sequence/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int count=1,maxx=INT_MIN;
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]+1==nums[i+1])
                count++;
            else{
                if(count>maxx)
                    maxx=count;
                count=1;
            }
        }
        return max(maxx,count);
    }
};