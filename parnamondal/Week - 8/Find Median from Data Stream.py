# Time Complexity : O(logN)
# Space Complexity : O(N)

import heapq
class MedianFinder:
    def __init__(self):
        self.lo = []  
        self.hi = []  

    def addNum(self, num):
        heappush(self.lo, -num)             # lo is maxheap, so -1 * num
        heappush(self.hi, -self.lo[0])      # hi is minheap
        heappop(self.lo)
        
        if len(self.lo) < len(self.hi):
            heappush(self.lo, -self.hi[0])
            heappop(self.hi)
            
    def findMedian(self):
        if len(self.lo) > len(self.hi):
            return -self.lo[0]                  
        else:
            return (self.hi[0] - self.lo[0]) / 2  # - as low has -ve values



# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()