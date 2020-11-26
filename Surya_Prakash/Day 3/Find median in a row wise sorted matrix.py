import bisect
class Solution:
    def median(self, mat, r, c):
        # code here
        def count(mid):
            nonlocal r
            c = 0
            for i in range(r):
                idx = bisect.bisect_left(mat[i], mid)
                c += idx
            return (c)

        mn, mx = 1005, 0
        for i in range(r):
            mn = min(mn, min(mat[i]))
            mx = max(mx, max(mat[i]))
        l = mn
        h = mx
        p = (r * c) // 2
        while h - l > 1:
            mid = (l + h) // 2
            c = count(mid)
            if c <= p:
                l = mid
            else:
                h = mid
        return l