//brute force approach
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        if(prices.size()==0)
        {
            return 0;
        }
        else
        {
            for(int i=0;i<prices.size()-1;i++)
            {
                for(int j=i+1;j<prices.size();j++)
                {
                    int profit=prices[j]-prices[i];
                    if(profit>max_profit)
                    {
                        max_profit=profit;
                    }
                }
            }
            return max_profit;
        }
    }
};
