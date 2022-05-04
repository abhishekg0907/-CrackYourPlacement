class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red=0,white=0,blue=0,i;
        for(i=0;i<nums.size();i++)
            switch(nums[i])
            {
                case 0:red++;break;
                case 1:white++;break;
                case 2:blue++;break;
            }
        i=-1;
        while(++i||true){
            if(red)
            {
                nums[i]=0;
                red--;
                continue;
            }
            if(white)
            {
                nums[i]=1;
                white--;
                continue;
            }
            if(blue)
            {
                nums[i]=2;
                blue--;
                continue;
            }
            break;
        }
    }
};
