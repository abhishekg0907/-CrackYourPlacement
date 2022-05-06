#define f(i,j,n) for(int i=j;i<n;i++)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0],pro=0;
        
        f(i,0,prices.size()-1)
        {
            if(prices[i]<min)
                min = prices[i];
            if((prices[i+1]-min)>pro)
                pro = prices[i+1]-min;
        }
        return pro;
    }
};
