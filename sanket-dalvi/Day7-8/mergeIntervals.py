from typing import List


class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort(key=lambda x: (x[0],-x[1]))
        res = [intervals[0]]
        for i in range(1, len(intervals)):
            if res[-1][0] <= intervals[i][0] <= res[-1][1]:
                res[-1][1] = max(intervals[i][1], res[-1][1])
            else:
                res.append(intervals[i])
        return res

# Test
print(Solution().merge([[1,3],[2,6],[8,10],[15,18]]))