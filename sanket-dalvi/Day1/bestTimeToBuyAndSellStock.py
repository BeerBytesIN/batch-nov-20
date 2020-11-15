from typing import List


class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        if len(prices)<=1:
            return profit
        mn = prices[0]
        for i in range(len(prices)):
            profit = max(profit, prices[i]-mn)
            mn = min(mn, prices[i])
        return profit