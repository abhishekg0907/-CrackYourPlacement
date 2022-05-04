class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int first=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[first])
            {
                first++;
                nums[first] = nums[i];
            }
        }
        return first+1;
    }
};
