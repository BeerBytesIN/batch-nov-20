from typing import List


class Solution:
    def corpFlightBookings(self, bookings: List[List[int]], n: int) -> List[int]:
        res = [0]*(n+1)
        for i in bookings:
            res[i[0]-1] += i[2]
            res[i[1]] -= i[2]
        for i in range(n-1):
            res[i+1] += res[i]
        return res[:-1]

# Test
print(Solution().corpFlightBookings(bookings = [[1,2,10],[2,3,20],[2,5,25]], n = 5))