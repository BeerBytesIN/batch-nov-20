# Time Complexity - O(N)
# Space Complexity - O(1)

class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        for i in range (len(nums)):
            if a[abs(a[i])]>=0:
                a[abs(a[i])]=-a[abs(a[i])]
            else :
                return abs(a[i])