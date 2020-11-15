from bisect import bisect
import math
class Solution:
    def median(self, matrix, r, c):
        def bSearch(arr, num, l, h):
            if l < h:
                mid = (l+h)//2
                if arr[mid] == num:
                    return mid+1
                elif arr[mid] < num:
                    return bSearch(arr, num, mid+1, h)
                else:
                    return bSearch(arr, num, l, mid-1)
            return l+1
        mn = float("inf")
        mx = -float("inf")
        for mat in matrix:
            mn = min(mn, mat[0])
            mx = max(mx, mat[-1])
        mean = math.ceil((r*c)/2)
        while mn < mx:
            mid = mn + (mx-mn)//2
            left = 0
            for row in matrix:
                j = bisect(row, mid)
                left += j
            if left < mean:
                mn = mid + 1
            else:
                mx = mid
        return mn

# Test
mat = [[1, 3, 5],
       [2, 6, 9],
       [3, 6, 9]]
print(Solution().median(mat, len(mat), len(mat[0])))