int maxProfit(vector<int>& prices) {
        int res=0;
        int low=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            low=min(low,prices[i]);
            res=max(res,prices[i]-low);
        }
        return res;
    }