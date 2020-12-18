class Solution:
    def __init__(self):
        self.result = []

    def solve(self, i, curr, target, A):
        if i < len(A):
            curr.append(A[i])
            if sum(curr) == target:
                self.result.append(curr)
                return
            elif sum(curr) > target:
                return
            for i in range(i, len(A)):
                self.solve(i, curr.copy(), target, A)
            
            
    # @param A : list of integers
    # @param B : integer
    # @return a list of list of integers
    def combinationSum(self, A, B):
        A = sorted(set(A))
        for i in range(len(A)):
            self.solve(i, [], B, A)
        return self.result
        

# Test
print(Solution().combinationSum([2,3,6,7], 7))