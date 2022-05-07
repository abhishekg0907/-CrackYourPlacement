#define f(i,j,n) for(i=j;i<n;i++)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int i;
        f(i,0,nums.size())
            if (mp.find(target-nums[i]) == mp.end())
                mp[nums[i]]=i;
            else
                break;
            
        nums = {mp[target-nums[i]],i};
        return nums;
    }
};
