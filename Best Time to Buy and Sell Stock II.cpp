#define f(i,j,n) for(int i=j;i<n;i++)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1)
            return 0;
        int f=1,b=0,pro=0;
        f(i,1,prices.size())
        {
            if(prices[f]-prices[b]>0)
                pro += prices[f]-prices[b];
            f++;
            b++;
        }
        return pro;
    }
};
