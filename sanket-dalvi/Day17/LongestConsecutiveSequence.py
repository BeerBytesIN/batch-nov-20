from typing import List

from collections import defaultdict, deque


class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        graph = defaultdict(list)
        res = {0}
        visited = set()
        for i in nums:
            if i not in graph:
                graph[i] = []
                if i+1 in graph:
                    graph[i+1].append(i)
                    graph[i].append(i+1)
                if i-1 in graph:
                    graph[i-1].append(i)
                    graph[i].append(i-1)

        def trav(node):
            if node not in visited:
                q = deque([node])
                count = 0
                while q:
                    firstNode = q.popleft()
                    count += 1
                    visited.add(firstNode)
                    for i in graph[firstNode]:
                        if i not in visited:
                            q.append(i)
                res.add(count)
        for i in graph:
            trav(i)
        return max(res)


# Test
print(Solution().longestConsecutive([100, 4, 200, 1, 3, 2, 101]))
