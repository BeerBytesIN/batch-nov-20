# Time Complexity - O(N*K)
# Space Complexity - O(Nsuffixto K)

import heapq
class Solution:
    def nthSuperUglyNumber(self, n: int, pr: List[int]) -> int:
        pr_size=len(pr)
        data=[1]
        curr=None
        seen={1}
        for i in range (n-1):
            curr=heapq.heappop(data)
            for j in range(pr_size):
                if curr*pr[j] not in seen:
                    seen.add(curr*pr[j])
                    heapq.heappush(data,curr*pr[j])
                '''if curr*2 not in seen:
                    seen.add(curr*2)
                    heapq.heappush(data,curr*2)
                if curr*3 not in seen:
                    seen.add(curr*3)
                    heapq.heappush(data,curr*3)
                if curr*5 not in seen:
                    seen.add(curr*5)
                    heapq.heappush(data,curr*5)'''
        return heapq.heappop(data)

        
        