class Solution:
    def maxStairHeight(self, N):
        l = 1
        h = N
        while l <= h:
            mid = l + (h-l)//2
            midRes = ((mid+1)*mid)//2
            if midRes == N:
                return mid
            elif midRes < N:
                l = mid + 1
            else:
                h = mid - 1
        return l-1


# Test
print(Solution().maxStairHeight(15))
