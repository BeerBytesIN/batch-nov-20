#User function Template for python3
import math
class Solution:
    def maxStairHeight(self, N):
       total = N * 2
       h = int(math.sqrt(total))
       temp = h * (h+1)//2
       if temp > N:
           h -= 1
       return h   


#{ 
#  Driver Code Starts
#Initial Template for Python 3

import math
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        
        ob = Solution()
        print(ob.maxStairHeight(N))
# } Driver Code Ends
