// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int x=1;
        if(nums.size()==0) return 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1])
                x++;
            if(nums[i]!=nums[i+1])
                x=1;
            if(x>2){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
};