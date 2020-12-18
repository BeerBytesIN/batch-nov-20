
# Time Complexity- O(N+K*logK).
# Space Complexity - O(K)

from heapq import heapify,heappush,heappop
class Solution:

	def kLargest(self,arr, n, k):
        '''arr.sort(reverse=True)
        return arr[:k]'''
        heap=[]
        heapify(heap)
        for i in range (k):
            heappush(heap,arr[i])
        for i in range (k,n):
            if heap[0]>arr[i]:
                continue
            else:
                heappop(heap)
                heappush(heap,arr[i])
        heap.sort(reverse=True)
        
        return heap