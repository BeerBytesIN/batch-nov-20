class Solution:
    # @param A : list of integers
    # @return an integer
    def cntBits(self, A):
        length = len(bin(max(A))[2:])
        res = [[0,0] for _ in range(length)]
        for i in A:
            binTemp = bin(i)[2:]
            binNum = "0"*(length-len(binTemp))+binTemp
            for j, char in enumerate(binNum):
                if char == "0":
                    res[j][0] += 1
                else:
                    res[j][1] += 1
        return sum(map(lambda x: (2*x[0]*x[1])%1000000007, res))%1000000007

# Test
print(Solution().cntBits([1,3,5]))