// Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0) return 0;
        int min_price = prices[0];
        int maxprofit = 0;
        for(int i=0;i<prices.size();i++){
            if(prices[i] < min_price){
                min_price = prices[i];
            }else if(prices[i]-min_price >= maxprofit){
                maxprofit = prices[i]-min_price;
            }
        }
        return maxprofit;
    }
    
};
