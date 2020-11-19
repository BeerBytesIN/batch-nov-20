# Time Complexity - O(logN)
# Space Complexity - O(1)


class Solution:
    def mySqrt(self, x: int) -> int:
        l,h=1,x
        while (l<=h):
            mid=l+(h-l)//2
            if mid*mid<=x:
                l=mid+1
            else:
                h=mid-1
        return l-1
                