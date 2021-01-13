# Time Complexity - O(N)
# Space Complexity - O(Nsuffixto K)

import heapq
class Solution:
    def nthUglyNumber(self, n: int) -> int:
        data=[1]
        curr=None
        seen={1}
        for i in range (n-1):
            curr=heapq.heappop(data)
            if curr*2 not in seen:
                seen.add(curr*2)
                heapq.heappush(data,curr*2)
            if curr*3 not in seen:
                seen.add(curr*3)
                heapq.heappush(data,curr*3)
            if curr*5 not in seen:
                seen.add(curr*5)
                heapq.heappush(data,curr*5)
        return heapq.heappop(data)
