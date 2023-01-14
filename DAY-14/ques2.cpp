class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        if(target < nums[0])
            return 0;
        // if(target > nums[nums.zise()-1])
        //     return nums.size();   
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == target)
                return i;
            if(nums[i] < target && i+1 < nums.size() && nums[i+1] > target)
                return i+1;
        }
        return nums.size(); 
    }
};
