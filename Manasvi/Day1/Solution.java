class Solution {
    public int maxProfit(int[] prices) {
       int max=0;
        int max_profit=0;
        for(int i=prices.length-1;i>=0;i--)
        {
          if(max<prices[i])
          {
              max=prices[i];
          }
            if(max_profit<max-prices[i])
            {
               max_profit=max-prices[i] ;
            }
        }
        return max_profit;
    }
}