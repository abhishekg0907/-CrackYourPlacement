class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[abs(nums[i])]<1)
                break;
            else
                nums[abs(nums[i])]*=-1;
        }
        return abs(nums[i]);
    }
};
