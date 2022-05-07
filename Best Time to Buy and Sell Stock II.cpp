#define f(i,j,n) for(int i=j;i<n;i++)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pro=0;
        f(i,0,prices.size()-1)
            if(prices[i+1]>prices[i])
                pro += prices[i+1]-prices[i];
            
        return pro;
    }
};
