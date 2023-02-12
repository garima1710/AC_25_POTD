class Solution {
public:
    int findMin(vector<int>& nums) {

        int n = nums.size();
        int l = 0;
        int r = n-1;
        int mid;

        if (nums[r] > nums[0]) {
            return nums[0];
        }
        if(n == 1)
            return nums[0];
        if(n == 2)
            return min(nums[0],nums[1]);

        while(l<=r)
        {
            mid = l + (r-l)/2;
            if (nums[mid] > nums[mid + 1])
                return nums[mid + 1];
            if (nums[mid - 1] > nums[mid])
                return nums[mid];
            if (nums[mid] > nums[0])
                l = mid + 1;
            else
                r = mid - 1;
        }
        return 0;        
    }
};
