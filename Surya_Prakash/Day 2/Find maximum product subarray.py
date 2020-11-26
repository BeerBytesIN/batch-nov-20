def maxProduct(self, a: List[int]) -> int:
    n = len(a)

    prev_maxp = a[0]
    prev_minp = a[0]
    ans = a[0]
    for i in range(1, n):
        curr_maxp = max(prev_maxp * a[i], prev_minp * a[i], a[i])
        curr_minp = min(prev_maxp * a[i], prev_minp * a[i], a[i])
        ans = max(ans, curr_maxp)
        prev_maxp = curr_maxp
        prev_minp = curr_minp
    return (ans)