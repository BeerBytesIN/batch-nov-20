# Time Complexity - O(1)
# Space Complexity - O(1)
import math
class Solution:
    def maxStairHeight(self, n):
        ht=int(math.sqrt(n*2))
        t=ht*(ht+1)//2
        if (t>n):
            ht-=1 
        return ht