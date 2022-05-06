#define f(i,j,n) for(int i=j;i<n;i++)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int in=0,count=0;
        f(i,0,nums.size())
            if(nums[i])
                nums[in++] = nums[i];
            else
                count++;
        
        while(count)
            nums[nums.size()-count--]=0;
    }
};
