class Solution:
    # @param A : unsigned integer
    # @return an unsigned integer
    def reverse(self, A):
        b = bin(A)[2:]
        return int(("0"*(32-len(b))+b)[::-1], 2)

# Test
print(Solution().reverse(3))