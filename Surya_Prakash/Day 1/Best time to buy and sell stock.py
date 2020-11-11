def maxProfit(self, p: List[int]) -> int:
    if not p: return 0
    tmp = p[0]
    profit = 0
    for i in p:
        profit = max(profit, i - tmp)
        tmp = min(tmp, i)
    return (profit)