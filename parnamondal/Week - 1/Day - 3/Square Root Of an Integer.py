import math
# Time Complexity - O(1)
# Space Complexity - O(1)

class Solution:
    def countSquares(self, N):
        # code here 
        
        return (math.ceil(math.sqrt(N)))-1
