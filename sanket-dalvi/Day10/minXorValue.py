class Solution:
    # @param A : list of integers
    # @return an integer
    def findMinXor(self, A):
        A.sort()
        return min(map(lambda i: A[i-1]^A[i], range(1, len(A))))

# Test
print(Solution().findMinXor([12,4,6,2]))