class Solution:
    def countSquares(self, N):
        def sSearch(l, h):
            if l < h:
                mid = (l+h)//2
                if mid**2 == N:
                    return mid
                elif mid**2 < N:
                    return sSearch(mid+1, h)
                else:
                    return sSearch(l, mid)
            else:
                return l
        return sSearch(1, N)-1

# Test
print(Solution().countSquares(10))