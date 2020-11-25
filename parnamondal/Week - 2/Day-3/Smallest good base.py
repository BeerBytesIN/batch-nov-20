# Time Complexity - O(max digit)
# Space Complexity - O(1)

import math
class Solution:
    def smallestGoodBase(self, n: str) -> str:
        n=int(n)
        di=int(math.log(n, 2))
        
        for i in range (di,1,-1):
            asl=int(n**(1/i))
            if asl**(i+1)-1==n*(asl-1):
                return str(asl)
        return str(n-1)
                
