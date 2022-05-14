class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size()-1;
        int left = 0,right = n;
        int area = min(height[left],height[right])*(n);
        while((n--)>1)
        {
            if(height[left]<height[right])
            {
                if(min(height[++left],height[right])*(n)>area)
                    area = min(height[left],height[right])*(n);
            }
            else
            {
                if(min(height[left],height[--right])*(n)>area)
                    area = min(height[left],height[right])*(n);
            }
        }
        return area;
    }
};
