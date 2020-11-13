class Solution:
    def inSequence(self, A, B, C):
        diff = B-A
        if diff==0:
            return 1
        elif C==0:
            return 0
        elif diff < 0 and C < 0 or diff > 0 and C > 0:
            if diff%C==0:
                return 1
            else:
                return 0
        else:
            return 0

# Test
print(Solution().inSequence(A = 1, B = 3, C = 2))